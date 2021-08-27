#pragma once

namespace utils
{
	class file_system final
	{
		public:
			static void init();

			static void make_file(const char* name, const char* contents = "");
			static bool create_directory(const std::string& directory);
			static bool write_file(const std::string& file, const std::string& data, bool append = false);
			static void overwrite_file(const char* name, const char* contents);
			static bool exists(const std::string& path);
			static void create(const std::string& path);
			static bool read_file(const std::string& file, std::string* data);
			static std::string read_file(const std::string& file);
			static int set_protocol_directory();
			static std::string get_protocol_directory();
	};
}
