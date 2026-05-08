#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD98DE0)
#define UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD98E20)
#define UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1AD98E30)

namespace UnityEngine
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_Vector3___c_TypeDefinitionIndex = 25180;

	class RegistrationInfo_ScriptStruct_Vector3___c : public ::System::Object
	{
	public:
		static ::UnityEngine::RegistrationInfo_ScriptStruct_Vector3___c** StaticGet___9()
		{
			return (::UnityEngine::RegistrationInfo_ScriptStruct_Vector3___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_Vector3___c_TypeDefinitionIndex)->GetStaticField(0x1EB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3___C___CCTOR_B__6_0_OFFSET))(this);
		}
	};
}
