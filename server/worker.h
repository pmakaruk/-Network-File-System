#ifndef WORKER_CPP
#define WORKER_CPP
#include <vector>

#include <sys/types.h>

std::vector<u_int8_t> open_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> read_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> write_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> lseek_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> close_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> unlink_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> opendir_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> readdir_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> closedir_handler(std::vector<u_int8_t> byte_request);

std::vector<u_int8_t> make_response(std::vector<u_int8_t> byte_request);

void worker(int socket_fd);

#endif