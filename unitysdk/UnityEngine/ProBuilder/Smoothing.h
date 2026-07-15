#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_1_OFFSET UNITYSDK_OFFSET(0x1779BFA0)
#define UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_OFFSET UNITYSDK_OFFSET(0x1779BF90)
#define UNITYENGINE_PROBUILDER_SMOOTHING_FINDSOFTEDGESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1779D3A0)
#define UNITYENGINE_PROBUILDER_SMOOTHING_GETNEXTUNUSEDSMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x1779BF00)
#define UNITYENGINE_PROBUILDER_SMOOTHING_GETUNUSEDSMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x1779BCC0)
#define UNITYENGINE_PROBUILDER_SMOOTHING_ISSMOOTH_OFFSET UNITYSDK_OFFSET(0x1779BF70)
#define UNITYENGINE_PROBUILDER_SMOOTHING_ISSOFTEDGE_OFFSET UNITYSDK_OFFSET(0x1779D6A0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Smoothing_TypeDefinitionIndex = 41634;

	class Smoothing : public ::System::Object
	{
	public:
		// static const ::System::Int32 smoothingGroupNone = 0x0; // 0x0
		// static const ::System::Int32 smoothRangeMin = 0x1; // 0x0
		// static const ::System::Int32 smoothRangeMax = 0x18; // 0x0
		// static const ::System::Int32 hardRangeMin = 0x19; // 0x0
		// static const ::System::Int32 hardRangeMax = 0x2A; // 0x0

		static ::System::Int32 GetUnusedSmoothingGroup(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_GETUNUSEDSMOOTHINGGROUP_OFFSET))(a1);
		}

		static ::System::Int32 GetNextUnusedSmoothingGroup(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_GETNEXTUNUSEDSMOOTHINGGROUP_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSmooth(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_ISSMOOTH_OFFSET))(a1);
		}

		static ::System::Void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ApplySmoothingGroups_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Vector3>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FindSoftEdgesRecursive(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::ProBuilder::WingedEdge* a2, ::System::Single a3, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Single, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_FINDSOFTEDGESRECURSIVE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsSoftEdge(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::ProBuilder::EdgeLookup a2, ::UnityEngine::ProBuilder::EdgeLookup a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_ISSOFTEDGE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
