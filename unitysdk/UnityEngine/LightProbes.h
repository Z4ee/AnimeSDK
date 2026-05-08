#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_LIGHTPROBES_ADD_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0x1B4BEAB0)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4BEC50)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET UNITYSDK_OFFSET(0x1B4BEC40)
#define UNITYENGINE_LIGHTPROBES_GET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0x1B4BEC70)
#define UNITYENGINE_LIGHTPROBES_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1B4BEC60)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLNEEDSRETETRAHEDRALIZATIONFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B4BEC10)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLTETRAHEDRALIZATIONCOMPLETEDFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B4BEA90)
#define UNITYENGINE_LIGHTPROBES_REMOVE_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0x1B4BEB60)
#define UNITYENGINE_LIGHTPROBES_SETKODAMABLOCKER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4BECA0)
#define UNITYENGINE_LIGHTPROBES_SETKODAMABLOCKER_OFFSET UNITYSDK_OFFSET(0x1B4BEC90)
#define UNITYENGINE_LIGHTPROBES_SET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0x1B4BEC80)
#define UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1B4BEC30)
#define UNITYENGINE_LIGHTPROBES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BEA40)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbes_TypeDefinitionIndex = 5188;

	class LightProbes : public ::UnityEngine::Object
	{
	public:
		static ::System::Action** StaticGet_tetrahedralizationCompleted()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LightProbes_TypeDefinitionIndex)->GetStaticField(0x4F80);
		}
		static ::System::Action** StaticGet_needsRetetrahedralization()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LightProbes_TypeDefinitionIndex)->GetStaticField(0x4F88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CallTetrahedralizationCompletedFunction()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_INTERNAL_CALLTETRAHEDRALIZATIONCOMPLETEDFUNCTION_OFFSET))();
		}

		static ::System::Void add_needsRetetrahedralization(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ADD_NEEDSRETETRAHEDRALIZATION_OFFSET))(value);
		}

		static ::System::Void remove_needsRetetrahedralization(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_REMOVE_NEEDSRETETRAHEDRALIZATION_OFFSET))(value);
		}

		static ::System::Void Internal_CallNeedsRetetrahedralizationFunction()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_INTERNAL_CALLNEEDSRETETRAHEDRALIZATIONFUNCTION_OFFSET))();
		}

		static ::System::Void TetrahedralizeAsync()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET))();
		}

		static ::System::Void GetInterpolatedProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::UnityEngine::Rendering::SphericalHarmonicsL2& probe)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET))(position, renderer, probe);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_positions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_POSITIONS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* get_bakedProbes()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_BAKEDPROBES_OFFSET))(this);
		}

		::System::Void set_bakedProbes(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_SET_BAKEDPROBES_OFFSET))(this, value);
		}

		static ::System::Void SetKodamaBlocker(::System::Int32 id, ::System::Boolean enable, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_SETKODAMABLOCKER_OFFSET))(id, enable, center, size);
		}

		static ::System::Void GetInterpolatedProbe_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Renderer* renderer, ::UnityEngine::Rendering::SphericalHarmonicsL2& probe)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET))(position, renderer, probe);
		}

		static ::System::Void SetKodamaBlocker_Injected(::System::Int32 id, ::System::Boolean enable, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& size)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_SETKODAMABLOCKER_INJECTED_OFFSET))(id, enable, center, size);
		}
	};
}
