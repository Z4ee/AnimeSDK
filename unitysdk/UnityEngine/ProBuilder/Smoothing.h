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

#define UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_1_OFFSET UNITYSDK_OFFSET(0x188AAE50)
#define UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_OFFSET UNITYSDK_OFFSET(0x188AAE40)
#define UNITYENGINE_PROBUILDER_SMOOTHING_FINDSOFTEDGESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x188AC0D0)
#define UNITYENGINE_PROBUILDER_SMOOTHING_GETNEXTUNUSEDSMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x188AADB0)
#define UNITYENGINE_PROBUILDER_SMOOTHING_GETUNUSEDSMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x188AABA0)
#define UNITYENGINE_PROBUILDER_SMOOTHING_ISSMOOTH_OFFSET UNITYSDK_OFFSET(0x188AAE20)
#define UNITYENGINE_PROBUILDER_SMOOTHING_ISSOFTEDGE_OFFSET UNITYSDK_OFFSET(0x188AC3D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Smoothing_TypeDefinitionIndex = 34173;

	class Smoothing : public ::System::Object
	{
	public:
		// static const ::System::Int32 smoothingGroupNone = 0x0; // 0x0
		// static const ::System::Int32 smoothRangeMin = 0x1; // 0x0
		// static const ::System::Int32 smoothRangeMax = 0x18; // 0x0
		// static const ::System::Int32 hardRangeMin = 0x19; // 0x0
		// static const ::System::Int32 hardRangeMax = 0x2A; // 0x0

		static ::System::Int32 GetUnusedSmoothingGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Int32(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_GETUNUSEDSMOOTHINGGROUP_OFFSET))(mesh);
		}

		static ::System::Int32 GetNextUnusedSmoothingGroup(::System::Int32 start, ::System::Collections::Generic::HashSet_1<::System::Int32>* used)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_GETNEXTUNUSEDSMOOTHINGGROUP_OFFSET))(start, used);
		}

		static ::System::Boolean IsSmooth(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_ISSMOOTH_OFFSET))(index);
		}

		static ::System::Void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Single angleThreshold)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_OFFSET))(mesh, faces, angleThreshold);
		}

		static ::System::Void ApplySmoothingGroups_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Single angleThreshold, ::Il2CppArray<::UnityEngine::Vector3>* normals)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_APPLYSMOOTHINGGROUPS_1_OFFSET))(mesh, faces, angleThreshold, normals);
		}

		static ::System::Boolean FindSoftEdgesRecursive(::Il2CppArray<::UnityEngine::Vector3>* normals, ::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Single angleThreshold, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* processed)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Single, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_FINDSOFTEDGESRECURSIVE_OFFSET))(normals, wing, angleThreshold, processed);
		}

		static ::System::Boolean IsSoftEdge(::Il2CppArray<::UnityEngine::Vector3>* normals, ::UnityEngine::ProBuilder::EdgeLookup left, ::UnityEngine::ProBuilder::EdgeLookup right, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::EdgeLookup, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SMOOTHING_ISSOFTEDGE_OFFSET))(normals, left, right, threshold);
		}
	};
}
