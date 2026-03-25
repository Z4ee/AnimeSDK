#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_LIGHTPROBES_ADD_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0x18A13650)
#define UNITYENGINE_LIGHTPROBES_ADD_TETRAHEDRALIZATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18A13490)
#define UNITYENGINE_LIGHTPROBES_ARELIGHTPROBESALLOWED_OFFSET UNITYSDK_OFFSET(0x18A13850)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_1_OFFSET UNITYSDK_OFFSET(0x18A139C0)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18A139B0)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET UNITYSDK_OFFSET(0x18A13860)
#define UNITYENGINE_LIGHTPROBES_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x18A13C50)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A13840)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET UNITYSDK_OFFSET(0x18A13830)
#define UNITYENGINE_LIGHTPROBES_GET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0x18A13C10)
#define UNITYENGINE_LIGHTPROBES_GET_CELLCOUNT_OFFSET UNITYSDK_OFFSET(0x18A13C40)
#define UNITYENGINE_LIGHTPROBES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18A13C30)
#define UNITYENGINE_LIGHTPROBES_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x18A13C00)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLNEEDSRETETRAHEDRALIZATIONFUNCTION_OFFSET UNITYSDK_OFFSET(0x18A137B0)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLTETRAHEDRALIZATIONCOMPLETEDFUNCTION_OFFSET UNITYSDK_OFFSET(0x18A135F0)
#define UNITYENGINE_LIGHTPROBES_REMOVE_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0x18A13700)
#define UNITYENGINE_LIGHTPROBES_REMOVE_TETRAHEDRALIZATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18A13540)
#define UNITYENGINE_LIGHTPROBES_SET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0x18A13C20)
#define UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x18A13820)
#define UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZE_OFFSET UNITYSDK_OFFSET(0x18A13810)
#define UNITYENGINE_LIGHTPROBES__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13480)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbes_TypeDefinitionIndex = 3937;

	class LightProbes : public ::UnityEngine::Object
	{
	public:
		static ::System::Action** StaticGet_needsRetetrahedralization()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LightProbes_TypeDefinitionIndex)->GetStaticField(0x12FD0);
		}
		static ::System::Action** StaticGet_tetrahedralizationCompleted()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LightProbes_TypeDefinitionIndex)->GetStaticField(0x12FD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES__CTOR_OFFSET))(this);
		}

		static ::System::Void add_tetrahedralizationCompleted(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ADD_TETRAHEDRALIZATIONCOMPLETED_OFFSET))(value);
		}

		static ::System::Void remove_tetrahedralizationCompleted(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_REMOVE_TETRAHEDRALIZATIONCOMPLETED_OFFSET))(value);
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

		static ::System::Void Tetrahedralize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZE_OFFSET))();
		}

		static ::System::Void TetrahedralizeAsync()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET))();
		}

		static ::System::Void GetInterpolatedProbe(::UnityEngine::Vector3 position, ::UnityEngine::Renderer* renderer, ::UnityEngine::Rendering::SphericalHarmonicsL2& probe)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET))(position, renderer, probe);
		}

		static ::System::Boolean AreLightProbesAllowed(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ARELIGHTPROBESALLOWED_OFFSET))(renderer);
		}

		static ::System::Void CalculateInterpolatedLightAndOcclusionProbes(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::Il2CppArray<::UnityEngine::Vector4>* occlusionProbes)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET))(positions, lightProbes, occlusionProbes);
		}

		static ::System::Void CalculateInterpolatedLightAndOcclusionProbes_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* occlusionProbes)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_1_OFFSET))(positions, lightProbes, occlusionProbes);
		}

		static ::System::Void CalculateInterpolatedLightAndOcclusionProbes_Internal(::Il2CppArray<::UnityEngine::Vector3>* positions, ::System::Int32 positionsCount, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* lightProbes, ::Il2CppArray<::UnityEngine::Vector4>* occlusionProbes)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_INTERNAL_OFFSET))(positions, positionsCount, lightProbes, occlusionProbes);
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

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_cellCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_CELLCOUNT_OFFSET))(this);
		}

		static ::System::Int32 GetCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETCOUNT_OFFSET))();
		}

		static ::System::Void GetInterpolatedProbe_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Renderer* renderer, ::UnityEngine::Rendering::SphericalHarmonicsL2& probe)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET))(position, renderer, probe);
		}
	};
}
