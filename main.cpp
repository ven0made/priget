//I would region this off but fuck pragma region, cringe shit, https://github.com/microsoft/vscode/issues/22289

#include "sleepy_discord/sleepy_discord.h"

#include "config.h"

using namespace std;

string token = "token";

class Client : public SleepyDiscord::DiscordClient {
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    void onMessage(SleepyDiscord::Message message) override {
        cout << message.author.username + ": " + message.content << endl;
    }
};

int main() {

    LoadConfig();

    cout << token << endl;
    Client client(token, SleepyDiscord::USER_CONTROLED_THREADS);
    client.run();
}