#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_REFLECTION_TYPEFILTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1875F220)
#define SYSTEM_REFLECTION_TYPEFILTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1875F260)
#define SYSTEM_REFLECTION_TYPEFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1875F210)
#define SYSTEM_REFLECTION_TYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1875F120)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeFilter_TypeDefinitionIndex = 588;

	class TypeFilter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
