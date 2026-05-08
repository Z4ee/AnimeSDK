#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_REFLECTION_MEMBERFILTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A9260)
#define SYSTEM_REFLECTION_MEMBERFILTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A92A0)
#define SYSTEM_REFLECTION_MEMBERFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A8CC0)
#define SYSTEM_REFLECTION_MEMBERFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A8CB0)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberFilter_TypeDefinitionIndex = 544;

	class MemberFilter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_INVOKE_OFFSET))(this, m, filterCriteria);
		}

		::System::IAsyncResult* BeginInvoke(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_BEGININVOKE_OFFSET))(this, m, filterCriteria, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
