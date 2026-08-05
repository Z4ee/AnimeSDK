#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Rendering/Universal/CharacterSimplifyMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1D6E0110)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1D6DFE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D6DFB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_START_OFFSET UNITYSDK_OFFSET(0x1D6DF910)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_STOP_OFFSET UNITYSDK_OFFSET(0x1D6DFC40)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E01D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CharacterRenderingSimplifyState_TypeDefinitionIndex = 27765;

	class CharacterRenderingSimplifyState : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single>>** StaticGet_transitionConfig()
		{
			return (::Il2CppArray<::System::ValueTuple_3<::System::Single, ::System::Single, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(CharacterRenderingSimplifyState_TypeDefinitionIndex)->GetStaticField(0x23760);
		}
		static ::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Single>>** StaticGet_state()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::System::Single, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(CharacterRenderingSimplifyState_TypeDefinitionIndex)->GetStaticField(0x23768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE__CCTOR_OFFSET))();
		}

		static ::System::Void Start(::UnityEngine::Rendering::Universal::CharacterSimplifyMode mode)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::CharacterSimplifyMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_START_OFFSET))(mode);
		}

		static ::System::Void Stop(::UnityEngine::Rendering::Universal::CharacterSimplifyMode mode)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::CharacterSimplifyMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_STOP_OFFSET))(mode);
		}

		static ::System::Single GetValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_GETVALUE_OFFSET))();
		}

		static ::System::Single GetWeight(::UnityEngine::Rendering::Universal::CharacterSimplifyMode mode)
		{
			return ((::System::Single(*)(::UnityEngine::Rendering::Universal::CharacterSimplifyMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_GETWEIGHT_OFFSET))(mode);
		}

		static ::System::Single GetTarget(::UnityEngine::Rendering::Universal::CharacterSimplifyMode mode)
		{
			return ((::System::Single(*)(::UnityEngine::Rendering::Universal::CharacterSimplifyMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHARACTERRENDERINGSIMPLIFYSTATE_GETTARGET_OFFSET))(mode);
		}
	};
}
