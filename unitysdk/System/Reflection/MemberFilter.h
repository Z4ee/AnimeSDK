#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_REFLECTION_MEMBERFILTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18754330)
#define SYSTEM_REFLECTION_MEMBERFILTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18754370)
#define SYSTEM_REFLECTION_MEMBERFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18754320)
#define SYSTEM_REFLECTION_MEMBERFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18754230)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberFilter_TypeDefinitionIndex = 569;

	class MemberFilter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Reflection::MemberInfo* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
