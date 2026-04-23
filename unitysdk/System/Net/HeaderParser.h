#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NET_HEADERPARSER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A119440)
#define SYSTEM_NET_HEADERPARSER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A119470)
#define SYSTEM_NET_HEADERPARSER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A118EE0)
#define SYSTEM_NET_HEADERPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A118DF0)

namespace System::Net
{
	inline static constexpr unsigned int HeaderParser_TypeDefinitionIndex = 2764;

	class HeaderParser : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER__CTOR_OFFSET))(this, object, method);
		}

		::Il2CppArray<::System::String*>* Invoke(::System::String* value)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_INVOKE_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_BEGININVOKE_OFFSET))(this, value, callback, object);
		}

		::Il2CppArray<::System::String*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
