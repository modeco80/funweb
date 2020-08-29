#include <Server.h>

// TODO:
// -include impl

// constructors for creating impl objects

Server::Server() {
	impl = new Server::Impl();
}

Server::~Server() {
	delete impl;
}