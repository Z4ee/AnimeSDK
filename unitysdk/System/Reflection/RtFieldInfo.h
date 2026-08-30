#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/RuntimeFieldInfo.h"

namespace System { class Object; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_REFLECTION_RTFIELDINFO_CHECKCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x1C43E100)
#define SYSTEM_REFLECTION_RTFIELDINFO_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x1C43E480)
#define SYSTEM_REFLECTION_RTFIELDINFO_UNSAFEGETVALUE_OFFSET UNITYSDK_OFFSET(0x1C43E0C0)
#define SYSTEM_REFLECTION_RTFIELDINFO_UNSAFESETVALUE_OFFSET UNITYSDK_OFFSET(0x1C43E3F0)
#define SYSTEM_REFLECTION_RTFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C43E690)

namespace System::Reflection
{
	inline static constexpr unsigned int RtFieldInfo_TypeDefinitionIndex = 618;

	class RtFieldInfo : public ::System::Reflection::RuntimeFieldInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO__CTOR_OFFSET))(this);
		}

		::System::Object* UnsafeGetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_UNSAFEGETVALUE_OFFSET))(this, a1);
		}

		::System::Void CheckConsistency(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_CHECKCONSISTENCY_OFFSET))(this, a1);
		}

		::System::Void UnsafeSetValue(::System::Object* a1, ::System::Object* a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::Binder* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_UNSAFESETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetValueDirect(::System::TypedReference a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_SETVALUEDIRECT_OFFSET))(this, a1, a2);
		}
	};
}
