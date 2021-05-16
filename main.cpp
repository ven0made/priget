#include "iostream"

#include "sleepy_discord/sleepy_discord.h"

class Client : public SleepyDiscord::DiscordClient {
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    void onMessage(SleepyDiscord::Message message) override {
        std::cout << message.author.username + ": " + message.content << std::endl;
    }
};

int main() {
    Client client("token", SleepyDiscord::USER_CONTROLED_THREADS);
    client.run();
}
