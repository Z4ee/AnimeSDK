#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NET_HEADERPARSER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E984AC0)
#define SYSTEM_NET_HEADERPARSER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E984AF0)
#define SYSTEM_NET_HEADERPARSER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E984AB0)
#define SYSTEM_NET_HEADERPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E984A40)

namespace System::Net
{
	inline static constexpr unsigned int HeaderParser_TypeDefinitionIndex = 2775;

	class HeaderParser : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* Invoke(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
