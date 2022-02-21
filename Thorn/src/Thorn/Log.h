#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Thorn
{
	class THORN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

//Core log macros
#define TH_CORE_TRACE(...) ::Thorn::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TH_CORE_INFO(...)  ::Thorn::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TH_CORE_WARN(...)  ::Thorn::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TH_CORE_ERROR(...) ::Thorn::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TH_CORE_FATAL(...) ::Thorn::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define TH_TRACE(...) ::Thorn::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TH_INFO(...)  ::Thorn::Log::GetClientLogger()->info(__VA_ARGS__)
#define TH_WARN(...)  ::Thorn::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TH_ERROR(...) ::Thorn::Log::GetClientLogger()->error(__VA_ARGS__)
#define TH_FATAL(...) ::Thorn::Log::GetClientLogger()->fatal(__VA_ARGS__)