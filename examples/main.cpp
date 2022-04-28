#include <pine/server.h>

void index(pine::request* request, pine::response* response)
{
    response->set_text("index");
}

void dynamic_image(pine::request* request, pine::response* response)
{
    response->set_header("Content-Type", "image/jpg");
    response->set_content_file(request->arg(0));
}

void url_arguments(pine::request* request, pine::response* response)
{
    response->set_text("arguments: " + request->arg(0) + ", " + request->arg(1));
}

void user_agent(pine::request* request, pine::response* response)
{
    response->set_text("user agent: " + request->header("user-agent"));
}

int main()
{
    pine::server server(5000);
    server.set_static_path("static");
    server.route({ "/image/@", dynamic_image });
    server.route({ "/args/@/@", url_arguments });
    server.route({ "/ua", user_agent });
    server.route({ "/", index });
    server.run();
}
