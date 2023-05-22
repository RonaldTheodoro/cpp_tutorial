#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
   private:
    string name;
    string owner_name;
    int subscribers_count;
    list<string> published_videos_titles;
    int content_quality;

   public:
    YouTubeChannel(string _name, string _owner_name) {
        name = _name;
        owner_name = _owner_name;
        subscribers_count = 0;
        content_quality = 0;
    }

    void get_info() {
        cout << "Name: " << name << endl;
        cout << "Owner name: " << owner_name << endl;
        cout << "Subscribers count: " << subscribers_count << endl;
        cout << "Videos: " << endl;
        for (string video_title : published_videos_titles) {
            cout << video_title << endl;
        }
    }

    void subscribe() { subscribers_count++; }
    void unsubscribe() {
        if (subscribers_count > 0) subscribers_count--;
    }
    void publish_video(string video_title) {
        published_videos_titles.push_back(video_title);
    }
    string get_name() { return name; }
    void set_name(string _name) { name = _name; }
    string get_owner_name() { return owner_name; }
    void set_owner_name(string _owner_name) { owner_name = _owner_name; }
    void improve_content_quality() { content_quality++; }
    void check_analytics() {
        string msg = (content_quality < 5) ? "bad quality" : "great";
        cout << get_name() << " has " << msg << " content." << endl;
    }
};

class CookingYouTubeChannel : public YouTubeChannel {
   public:
    CookingYouTubeChannel(string _name, string _owner_name)
        : YouTubeChannel(_name, _owner_name) {}

    void practice() {
        cout << get_owner_name()
             << " is practicing cooking, learning new recipes, experimenting "
                "with spices..."
             << endl;
        improve_content_quality();
    }
};

class SingersYouTubeChannel : public YouTubeChannel {
   public:
    SingersYouTubeChannel(string _name, string _owner_name)
        : YouTubeChannel(_name, _owner_name) {}

    void practice() {
        cout << get_owner_name()
             << " is taking singing classes, learning new songs, learning how "
                "to dance..."
             << endl;
        improve_content_quality();
    }
};

int main() {
    YouTubeChannel youtube_channel_01("CodeBeauty", "Saldina");
    youtube_channel_01.publish_video("C++ for beginners video 1");
    youtube_channel_01.publish_video("HTML & CSS Video 1");
    youtube_channel_01.publish_video("C++ OOP Video 1");
    youtube_channel_01.subscribe();
    youtube_channel_01.subscribe();
    youtube_channel_01.subscribe();
    youtube_channel_01.unsubscribe();

    YouTubeChannel youtube_channel_02("AmySings", "Amy");
    youtube_channel_02.publish_video("Johnny B - Cover");
    youtube_channel_02.publish_video("Lorelei - Cover");

    CookingYouTubeChannel youtube_channel_03("Amy's Kitchen", "Amy");
    youtube_channel_03.publish_video("Apple pie");
    youtube_channel_03.publish_video("Chocolate cake");
    youtube_channel_03.subscribe();
    youtube_channel_03.subscribe();
    youtube_channel_03.subscribe();

    CookingYouTubeChannel youtube_channel_04("John's Kitchen", "John");
    SingersYouTubeChannel youtube_channel_05("John Sings", "John");

    youtube_channel_01.get_info();
    youtube_channel_02.get_info();
    youtube_channel_03.get_info();
    youtube_channel_04.get_info();
    youtube_channel_05.get_info();

    youtube_channel_03.practice();
    youtube_channel_04.practice();
    youtube_channel_05.practice();
    youtube_channel_05.practice();
    youtube_channel_05.practice();
    youtube_channel_05.practice();
    youtube_channel_05.practice();

    YouTubeChannel *yt_04 = &youtube_channel_04;
    YouTubeChannel *yt_05 = &youtube_channel_05;

    yt_04->check_analytics();
    yt_05->check_analytics();

    return EXIT_SUCCESS;
}