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

#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVANCHOR_OFFSET UNITYSDK_OFFSET(0x19245810)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVSETTINGS_OFFSET UNITYSDK_OFFSET(0x192440B0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_CALCULATEDELTA_OFFSET UNITYSDK_OFFSET(0x19243050)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_COPYUVS_OFFSET UNITYSDK_OFFSET(0x1922B240)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETAUTOUNWRAPSETTINGS_OFFSET UNITYSDK_OFFSET(0x19243750)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETINDEX_OFFSET UNITYSDK_OFFSET(0x19243970)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETROTATEDSIZE_OFFSET UNITYSDK_OFFSET(0x19243A70)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETUVTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19243860)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_PROJECTTEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x1920A350)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_SCALEUVS_OFFSET UNITYSDK_OFFSET(0x192453C0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOANDALIGNUNWRAPPARAMSTOUVS_OFFSET UNITYSDK_OFFSET(0x19242E20)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOUV_OFFSET UNITYSDK_OFFSET(0x19242C80)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_UNWRAP_OFFSET UNITYSDK_OFFSET(0x1920A210)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_UPGRADEAUTOUVSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x19207CE0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0x19245DC0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int UvUnwrapping_TypeDefinitionIndex = 43254;

	class UvUnwrapping : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_IndexBuffer()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping_TypeDefinitionIndex)->GetStaticField(0x64D80);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>** StaticGet_s_UVTransformProjectionBuffer()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping_TypeDefinitionIndex)->GetStaticField(0x64D88);
		}
		static ::UnityEngine::Vector2* StaticGet_s_TempVector2()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping_TypeDefinitionIndex)->GetStaticField(0x14D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING__CCTOR_OFFSET))();
		}

		static ::System::Void SetAutoUV(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOUV_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAutoAndAlignUnwrapParamsToUVs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_SETAUTOANDALIGNUNWRAPPARAMSTOUVS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::AutoUnwrapSettings GetAutoUnwrapSettings(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETAUTOUNWRAPSETTINGS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform GetUVTransform(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::UnityEngine::ProBuilder::UvUnwrapping_UVTransform(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETUVTRANSFORM_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetIndex(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETINDEX_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::UvUnwrapping_UVTransform CalculateDelta(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a3, ::System::Collections::Generic::IList_1<::System::Int32>* a4)
		{
			return ((::UnityEngine::ProBuilder::UvUnwrapping_UVTransform(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_CALCULATEDELTA_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 GetRotatedSize(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_GETROTATEDSIZE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Unwrap(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_UNWRAP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CopyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::UnityEngine::ProBuilder::Face* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_COPYUVS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ProjectTextureGroup(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2, ::UnityEngine::ProBuilder::AutoUnwrapSettings a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_PROJECTTEXTUREGROUP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ApplyUVSettings(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::ProBuilder::AutoUnwrapSettings a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVSETTINGS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ScaleUVs(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::ProBuilder::Bounds2D* a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Bounds2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_SCALEUVS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ApplyUVAnchor(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::ProBuilder::AutoUnwrapSettings_Anchor))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_APPLYUVANCHOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UpgradeAutoUVScaleOffset(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_UPGRADEAUTOUVSCALEOFFSET_OFFSET))(a1);
		}
	};
}
