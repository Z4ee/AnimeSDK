#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Net { class TraceSource; }

#define SYSTEM_NET_LOGGING_ENTER_1_OFFSET UNITYSDK_OFFSET(0x1DB875C0)
#define SYSTEM_NET_LOGGING_ENTER_2_OFFSET UNITYSDK_OFFSET(0x1DB875D0)
#define SYSTEM_NET_LOGGING_ENTER_OFFSET UNITYSDK_OFFSET(0x1DB875B0)
#define SYSTEM_NET_LOGGING_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DB875E0)
#define SYSTEM_NET_LOGGING_EXIT_1_OFFSET UNITYSDK_OFFSET(0x1DB87600)
#define SYSTEM_NET_LOGGING_EXIT_2_OFFSET UNITYSDK_OFFSET(0x1DB87610)
#define SYSTEM_NET_LOGGING_EXIT_OFFSET UNITYSDK_OFFSET(0x1DB875F0)
#define SYSTEM_NET_LOGGING_GET_HTTPLISTENER_OFFSET UNITYSDK_OFFSET(0x1DB87590)
#define SYSTEM_NET_LOGGING_GET_SOCKETS_OFFSET UNITYSDK_OFFSET(0x1DB875A0)
#define SYSTEM_NET_LOGGING_GET_WEB_OFFSET UNITYSDK_OFFSET(0x1DB87580)
#define SYSTEM_NET_LOGGING_PRINTERROR_OFFSET UNITYSDK_OFFSET(0x1DB87670)
#define SYSTEM_NET_LOGGING_PRINTINFO_1_OFFSET UNITYSDK_OFFSET(0x1DB87630)
#define SYSTEM_NET_LOGGING_PRINTINFO_2_OFFSET UNITYSDK_OFFSET(0x1DB87640)
#define SYSTEM_NET_LOGGING_PRINTINFO_OFFSET UNITYSDK_OFFSET(0x1DB87620)
#define SYSTEM_NET_LOGGING_PRINTWARNING_1_OFFSET UNITYSDK_OFFSET(0x1DB87660)
#define SYSTEM_NET_LOGGING_PRINTWARNING_OFFSET UNITYSDK_OFFSET(0x1DB87650)
#define SYSTEM_NET_LOGGING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB87680)

namespace System::Net
{
	inline static constexpr unsigned int Logging_TypeDefinitionIndex = 3487;

	class Logging : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_On()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Logging_TypeDefinitionIndex)->GetStaticField(0x1100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING__CCTOR_OFFSET))();
		}

		static ::System::Net::TraceSource* get_Web()
		{
			return ((::System::Net::TraceSource*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_GET_WEB_OFFSET))();
		}

		static ::System::Net::TraceSource* get_HttpListener()
		{
			return ((::System::Net::TraceSource*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_GET_HTTPLISTENER_OFFSET))();
		}

		static ::System::Net::TraceSource* get_Sockets()
		{
			return ((::System::Net::TraceSource*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_GET_SOCKETS_OFFSET))();
		}

		static ::System::Void Enter(::System::Net::TraceSource* traceSource, ::System::Object* obj, ::System::String* method, ::System::Object* paramObject)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_ENTER_OFFSET))(traceSource, obj, method, paramObject);
		}

		static ::System::Void Enter_1(::System::Net::TraceSource* traceSource, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_ENTER_1_OFFSET))(traceSource, msg);
		}

		static ::System::Void Enter_2(::System::Net::TraceSource* traceSource, ::System::String* msg, ::System::String* parameters)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_ENTER_2_OFFSET))(traceSource, msg, parameters);
		}

		static ::System::Void Exception(::System::Net::TraceSource* traceSource, ::System::Object* obj, ::System::String* method, ::System::Exception* e)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_EXCEPTION_OFFSET))(traceSource, obj, method, e);
		}

		static ::System::Void Exit(::System::Net::TraceSource* traceSource, ::System::Object* obj, ::System::String* method, ::System::Object* retObject)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_EXIT_OFFSET))(traceSource, obj, method, retObject);
		}

		static ::System::Void Exit_1(::System::Net::TraceSource* traceSource, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_EXIT_1_OFFSET))(traceSource, msg);
		}

		static ::System::Void Exit_2(::System::Net::TraceSource* traceSource, ::System::String* msg, ::System::String* parameters)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_EXIT_2_OFFSET))(traceSource, msg, parameters);
		}

		static ::System::Void PrintInfo(::System::Net::TraceSource* traceSource, ::System::Object* obj, ::System::String* method, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_PRINTINFO_OFFSET))(traceSource, obj, method, msg);
		}

		static ::System::Void PrintInfo_1(::System::Net::TraceSource* traceSource, ::System::Object* obj, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_PRINTINFO_1_OFFSET))(traceSource, obj, msg);
		}

		static ::System::Void PrintInfo_2(::System::Net::TraceSource* traceSource, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_PRINTINFO_2_OFFSET))(traceSource, msg);
		}

		static ::System::Void PrintWarning(::System::Net::TraceSource* traceSource, ::System::Object* obj, ::System::String* method, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_PRINTWARNING_OFFSET))(traceSource, obj, method, msg);
		}

		static ::System::Void PrintWarning_1(::System::Net::TraceSource* traceSource, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_PRINTWARNING_1_OFFSET))(traceSource, msg);
		}

		static ::System::Void PrintError(::System::Net::TraceSource* traceSource, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Net::TraceSource*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LOGGING_PRINTERROR_OFFSET))(traceSource, msg);
		}
	};
}
