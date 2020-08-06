//#define CURL_STATICLIB
//#include <windows.h>
//#include <stdlib.h>
//#include <string.h>
//#include <tchar.h>
//
//#include <iostream>
//
//#include "curl.h"
//
//
////void SetWallpaper()
////{
////	const wchar_t* filepath = L"C:\\Users\\Emmy Ni\\Downloads\\marguerite-729510_1920.jpg";
////
////	int result;
////	result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID)filepath, SPIF_UPDATEINIFILE);
////
////	if (result)
////	{
////		std::cout << "Wallpaper set";
////	}
////	else
////	{
////		std::cout << "Wallpaper not set";
////		std::cout << "SPI returned" << result;
////	}
////}
//
//static size_t my_write(void* buffer, size_t size, size_t nmemb, void* param)
//{
//	std::string& text = *static_cast<std::string*>(param);
//	size_t totalsize = size * nmemb;
//	text.append(static_cast<char*>(buffer), totalsize);
//	return totalsize;
//}
//
//int main()
//{
//	std::string result;
//	CURL* curl;
//	CURLcode res;
//	curl_global_init(CURL_GLOBAL_DEFAULT);
//	curl = curl_easy_init();
//	if (curl) {
//		curl_easy_setopt(curl, CURLOPT_URL, "https://tcno.co/hello.txt");
//		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_write);
//		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);
//		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
//		res = curl_easy_perform(curl);
//		curl_easy_cleanup(curl);
//		if (CURLE_OK != res) {
//			std::cerr << "CURL error: " << res << '\n';
//		}
//	}
//	curl_global_cleanup();
//	std::cout << result << "\n\n";
//}