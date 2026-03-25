#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/RuntimeFieldInfo.h"

namespace System { class Object; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_REFLECTION_RTFIELDINFO_CHECKCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x1637EC10)
#define SYSTEM_REFLECTION_RTFIELDINFO_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x1637EDE0)
#define SYSTEM_REFLECTION_RTFIELDINFO_UNSAFEGETVALUE_OFFSET UNITYSDK_OFFSET(0x1637EBD0)
#define SYSTEM_REFLECTION_RTFIELDINFO_UNSAFESETVALUE_OFFSET UNITYSDK_OFFSET(0x1637EDB0)
#define SYSTEM_REFLECTION_RTFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1637EF10)

namespace System::Reflection
{
	inline static constexpr unsigned int RtFieldInfo_TypeDefinitionIndex = 616;

	class RtFieldInfo : public ::System::Reflection::RuntimeFieldInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO__CTOR_OFFSET))(this);
		}

		::System::Object* UnsafeGetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_UNSAFEGETVALUE_OFFSET))(this, obj);
		}

		::System::Void CheckConsistency(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_CHECKCONSISTENCY_OFFSET))(this, target);
		}

		::System::Void UnsafeSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_UNSAFESETVALUE_OFFSET))(this, obj, value, invokeAttr, binder, culture);
		}

		::System::Void SetValueDirect(::System::TypedReference obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_SETVALUEDIRECT_OFFSET))(this, obj, value);
		}
	};
}
