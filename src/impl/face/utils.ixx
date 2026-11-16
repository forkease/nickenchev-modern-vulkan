export module app.utils;
import std;

namespace app {

    using Text = std::string;
    using TextRef = Text const &;

}

export namespace app {
    auto file_read_full( TextRef filePath ) -> Text;
}
