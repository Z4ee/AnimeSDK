#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_HASEXPLICITTHIS_OFFSET UNITYSDK_OFFSET(0x1F46F030)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISFREEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1F46F010)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F46F000)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1F46EFF0)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_THROWSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F46F020)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F46F040)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F46EE60)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F46EEA0)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F46EE30)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeMethodAttribute_TypeDefinitionIndex = 3724;

	class NativeMethodAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _HasExplicitThis_k__BackingField; // 0x18
		::System::Boolean _IsThreadSafe_k__BackingField; // 0x19
		::System::Boolean _ThrowsException_k__BackingField; // 0x1A
		::System::Boolean _IsFreeFunction_k__BackingField; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_NAME_OFFSET))(this, a1);
		}

		::System::Void set_IsThreadSafe(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISTHREADSAFE_OFFSET))(this, a1);
		}

		::System::Void set_IsFreeFunction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISFREEFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_ThrowsException(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_THROWSEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void set_HasExplicitThis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_HASEXPLICITTHIS_OFFSET))(this, a1);
		}
	};
}
