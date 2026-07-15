#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_FACEREBUILDDATA_APPLY_1_OFFSET UNITYSDK_OFFSET(0xC087CE0)
#define UNITYENGINE_PROBUILDER_FACEREBUILDDATA_APPLY_OFFSET UNITYSDK_OFFSET(0xC086EC0)
#define UNITYENGINE_PROBUILDER_FACEREBUILDDATA_OFFSET_OFFSET UNITYSDK_OFFSET(0xC086E10)
#define UNITYENGINE_PROBUILDER_FACEREBUILDDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC086E20)
#define UNITYENGINE_PROBUILDER_FACEREBUILDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC0892F0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int FaceRebuildData_TypeDefinitionIndex = 41556;

	class FaceRebuildData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* sharedIndexes; // 0x10
		::UnityEngine::ProBuilder::Face* face; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* sharedIndexesUV; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices; // 0x28
		::System::Int32 _appliedOffset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACEREBUILDDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACEREBUILDDATA_OFFSET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACEREBUILDDATA_TOSTRING_OFFSET))(this);
		}

		static ::System::Void Apply(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>* a1, ::UnityEngine::ProBuilder::ProBuilderMesh* a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a3, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACEREBUILDDATA_APPLY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Apply_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACEREBUILDDATA_APPLY_1_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
