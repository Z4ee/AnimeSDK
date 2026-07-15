#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_SMOOTHING___C__APPLYSMOOTHINGGROUPS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1779DA70)
#define UNITYENGINE_PROBUILDER_SMOOTHING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1779DA00)
#define UNITYENGINE_PROBUILDER_SMOOTHING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1779DA40)
#define UNITYENGINE_PROBUILDER_SMOOTHING___C__GETUNUSEDSMOOTHINGGROUP_B__5_0_OFFSET UNITYSDK_OFFSET(0x1779DA50)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Smoothing___c_TypeDefinitionIndex = 41635;

	class Smoothing___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Smoothing___c_TypeDefinitionIndex)->GetStaticField(0x559E0);
		}
		static ::UnityEngine::ProBuilder::Smoothing___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::Smoothing___c**)Il2CppClass::FromTypeDefinitionIndex(Smoothing___c_TypeDefinitionIndex)->GetStaticField(0x559E8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Smoothing___c_TypeDefinitionIndex)->GetStaticField(0x559F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetUnusedSmoothingGroup_b__5_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING___C__GETUNUSEDSMOOTHINGGROUP_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _ApplySmoothingGroups_b__9_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING___C__APPLYSMOOTHINGGROUPS_B__9_0_OFFSET))(this, a1);
		}
	};
}
