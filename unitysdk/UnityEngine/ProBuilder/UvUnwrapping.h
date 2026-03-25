#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings_Anchor.h"
#include "unitysdk/UnityEngine/ProBuilder/UvUnwrapping_UVTransform.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Bounds2D; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVANCHOR_OFFSET UNITYSDK_OFFSET(0x188B2C00)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVSETTINGS_OFFSET UNITYSDK_OFFSET(0x188B1A70)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_CALCULATEDELTA_OFFSET UNITYSDK_OFFSET(0x188B0A00)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_COPYUVS_OFFSET UNITYSDK_OFFSET(0x18898BC0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETAUTOUNWRAPSETTINGS_OFFSET UNITYSDK_OFFSET(0x188B11D0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETINDEX_OFFSET UNITYSDK_OFFSET(0x188B13F0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETROTATEDSIZE_OFFSET UNITYSDK_OFFSET(0x188B14A0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETUVTRANSFORM_OFFSET UNITYSDK_OFFSET(0x188B12E0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_PROJECTTEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x188781D0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_SCALEUVS_OFFSET UNITYSDK_OFFSET(0x188B2960)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOANDALIGNUNWRAPPARAMSTOUVS_OFFSET UNITYSDK_OFFSET(0x188B07C0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOUV_OFFSET UNITYSDK_OFFSET(0x188B0650)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_UNWRAP_OFFSET UNITYSDK_OFFSET(0x18878090)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_UPGRADEAUTOUVSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x18875D90)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B3120)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int UvUnwrapping_TypeDefinitionIndex = 34182;

	class UvUnwrapping : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_IndexBuffer()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping_TypeDefinitionIndex)->GetStaticField(0x2A8B0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_s_UVTransformProjectionBuffer()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping_TypeDefinitionIndex)->GetStaticField(0x2A8B8);
		}
		static ::UnityEngine::Vector2* StaticGet_s_TempVector2()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping_TypeDefinitionIndex)->GetStaticField(0xE040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING__CCTOR_OFFSET))();
		}

		static ::System::Void SetAutoUV(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces, ::System::Boolean auto_)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOUV_OFFSET))(mesh, faces, auto_);
		}

		static ::System::Void SetAutoAndAlignUnwrapParamsToUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToConvert)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOANDALIGNUNWRAPPARAMSTOUVS_OFFSET))(mesh, facesToConvert);
		}

		static ::UnityEngine::ProBuilder::AutoUnwrapSettings GetAutoUnwrapSettings(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETAUTOUNWRAPSETTINGS_OFFSET))(mesh, face);
		}

		static ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform GetUVTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::UnityEngine::ProBuilder::UvUnwrapping_UVTransform(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETUVTRANSFORM_OFFSET))(mesh, face);
		}

		static ::System::Int32 GetIndex(::System::Collections::Generic::IList_1<::System::Int32>* collection, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETINDEX_OFFSET))(collection, index);
		}

		static ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform CalculateDelta(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* src, ::System::Collections::Generic::IList_1<::System::Int32>* srcIndices, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* dst, ::System::Collections::Generic::IList_1<::System::Int32>* dstIndices)
		{
			return ((::UnityEngine::ProBuilder::UvUnwrapping_UVTransform(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_CALCULATEDELTA_OFFSET))(src, srcIndices, dst, dstIndices);
		}

		static ::UnityEngine::Vector2 GetRotatedSize(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<::System::Int32>* indices, ::UnityEngine::Vector2 center, ::System::Single rotation)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETROTATEDSIZE_OFFSET))(points, indices, center, rotation);
		}

		static ::System::Void Unwrap(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_UNWRAP_OFFSET))(mesh, face, projection);
		}

		static ::System::Void CopyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* source, ::UnityEngine::ProBuilder::Face* dest)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_COPYUVS_OFFSET))(mesh, source, dest);
		}

		static ::System::Void ProjectTextureGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 group, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_PROJECTTEXTUREGROUP_OFFSET))(mesh, group, unwrapSettings);
		}

		static ::System::Void ApplyUVSettings(::Il2CppArray<::UnityEngine::Vector2>* uvs, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVSETTINGS_OFFSET))(uvs, indexes, uvSettings);
		}

		static ::System::Void ScaleUVs(::Il2CppArray<::UnityEngine::Vector2>* uvs, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::UnityEngine::Vector2 scale, ::UnityEngine::ProBuilder::Bounds2D* bounds)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Bounds2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_SCALEUVS_OFFSET))(uvs, indexes, scale, bounds);
		}

		static ::System::Void ApplyUVAnchor(::Il2CppArray<::UnityEngine::Vector2>* uvs, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor anchor)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVANCHOR_OFFSET))(uvs, indexes, anchor);
		}

		static ::System::Void UpgradeAutoUVScaleOffset(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_UPGRADEAUTOUVSCALEOFFSET_OFFSET))(mesh);
		}
	};
}
