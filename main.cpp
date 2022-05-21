#include "xor-crypt-defs"

int main()
{
	xc::xor_encrypt xe("nopass");
	
	"output.txt" << xe << "dfg" << " opana" << " popalo" << std::string(" some buf data");
	xe.close_fd();
	
	std::string all_data;
	
	xc::xor_decrypt xd("nopass");
	"output.txt" >> xd >> all_data;
	
	std::cout << all_data << "\n";
	
	std::string source("some random floating data that must be encrypted");
	
	auto buf = xc::buffer::make_buffer(source.size());
	
	buf << xe << source;
	buf >> xd >> all_data;
	
	std::cout << all_data << "\n";
	return 0;
}
