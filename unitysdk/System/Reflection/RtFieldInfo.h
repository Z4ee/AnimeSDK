#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/RuntimeFieldInfo.h"

namespace System { class Object; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_234626EFC2067AB3_OFFSET UNITYSDK_OFFSET(0x18C62660)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_535B1BA754ABCE30_OFFSET UNITYSDK_OFFSET(0x18C627D0)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18C62930)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_9FEE592057D538E3_OFFSET UNITYSDK_OFFSET(0x18C62800)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_D702C669788B2208_OFFSET UNITYSDK_OFFSET(0x18C62620)

namespace System::Reflection
{
	inline static constexpr unsigned int RtFieldInfo_TypeDefinitionIndex = 589;

	class RtFieldInfo : public ::System::Reflection::RuntimeFieldInfo
	{
	public:
		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Object* Method_4_D702C669788B2208(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_D702C669788B2208_OFFSET))(this, obj);
		}

		::System::Void Method_4_234626EFC2067AB3(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_234626EFC2067AB3_OFFSET))(this, target);
		}

		::System::Void Method_4_535B1BA754ABCE30(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_535B1BA754ABCE30_OFFSET))(this, obj, value, invokeAttr, binder, culture);
		}

		::System::Void Method_4_9FEE592057D538E3(::System::TypedReference obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_9FEE592057D538E3_OFFSET))(this, obj, value);
		}
	};
}
