#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_REFLECTION_TYPEFILTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A59E4D0)
#define SYSTEM_REFLECTION_TYPEFILTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A59E510)
#define SYSTEM_REFLECTION_TYPEFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A59DF30)
#define SYSTEM_REFLECTION_TYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A59DF20)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeFilter_TypeDefinitionIndex = 563;

	class TypeFilter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Type* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_INVOKE_OFFSET))(this, m, filterCriteria);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* m, ::System::Object* filterCriteria, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_BEGININVOKE_OFFSET))(this, m, filterCriteria, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
