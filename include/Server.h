

namespace funweb {
	
	// abstracted websocket config.
	// This will get translated into impl-favorable
	// data
	struct WSConfig {
		
	};
	
	struct Server {
		
		Server();
		~Server();
		
		void Run(std::uint16_t port, const std::string& docroot = ".");
		
		
		// Assign request handlers
		
		
		
		// Utility functions,
		// intended to be called during a request
		
		
	private:
		struct Impl;
		
		// TODO: use shared_ptr
		Impl* impl;
	};
	
	
	
}