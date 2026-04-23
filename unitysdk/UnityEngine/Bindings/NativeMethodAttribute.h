#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_HASEXPLICITTHIS_OFFSET UNITYSDK_OFFSET(0x1A4F3540)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISFREEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1A4F3520)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1A4F3510)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A4F3500)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_THROWSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A4F3530)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4F3550)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A4F3370)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A4F33B0)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3340)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeMethodAttribute_TypeDefinitionIndex = 3704;

	class NativeMethodAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _ThrowsException_k__BackingField; // 0x18
		::System::Boolean _IsThreadSafe_k__BackingField; // 0x19
		::System::Boolean _HasExplicitThis_k__BackingField; // 0x1A
		::System::Boolean _IsFreeFunction_k__BackingField; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Boolean isFreeFunction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_2_OFFSET))(this, name, isFreeFunction);
		}

		::System::Void _ctor_3(::System::String* name, ::System::Boolean isFreeFunction, ::System::Boolean isThreadSafe)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE__CTOR_3_OFFSET))(this, name, isFreeFunction, isThreadSafe);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}

		::System::Void set_IsThreadSafe(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISTHREADSAFE_OFFSET))(this, value);
		}

		::System::Void set_IsFreeFunction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISFREEFUNCTION_OFFSET))(this, value);
		}

		::System::Void set_ThrowsException(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_THROWSEXCEPTION_OFFSET))(this, value);
		}

		::System::Void set_HasExplicitThis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_HASEXPLICITTHIS_OFFSET))(this, value);
		}
	};
}
