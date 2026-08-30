#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class SelectionPickerRenderer_ISelectionPickerRenderer; }

#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDEDGEMESH_OFFSET UNITYSDK_OFFSET(0x1EBA3760)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDVERTEXMESH_OFFSET UNITYSDK_OFFSET(0x1EBA2B90)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_DECODERGBA_OFFSET UNITYSDK_OFFSET(0x1EBA05C0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_ENCODERGBA_OFFSET UNITYSDK_OFFSET(0x1EBA2B20)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEEDGEPICKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1EBA23C0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEFACEPICKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1EBA0F80)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEVERTEXPICKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1EBA1C60)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_PICKERRENDERER_OFFSET UNITYSDK_OFFSET(0x1EBA00D0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_RENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1EB9FEF0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_TEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1EBA00C0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKEDGESINRECT_OFFSET UNITYSDK_OFFSET(0x1EB9F790)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKFACESINRECT_OFFSET UNITYSDK_OFFSET(0x1EB9E4D0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKVERTICESINRECT_OFFSET UNITYSDK_OFFSET(0x1EB9C220)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1EBA0600)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1EBA0B30)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EBA0200)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SHOULDUSEHDRP_OFFSET UNITYSDK_OFFSET(0x1EBA01D0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA3F20)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionPickerRenderer_TypeDefinitionIndex = 43228;

	class SelectionPickerRenderer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RenderTextureFormat>** StaticGet_s_PreferredFormats()
		{
			return (::Il2CppArray<::UnityEngine::RenderTextureFormat>**)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x5FA80);
		}
		static ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer** StaticGet_s_PickerRenderer()
		{
			return (::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer**)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x5FA88);
		}
		static ::UnityEngine::RenderTextureFormat* StaticGet_s_RenderTextureFormat()
		{
			return (::UnityEngine::RenderTextureFormat*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x13710);
		}
		static ::UnityEngine::Color* StaticGet_k_Whitef()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x13714);
		}
		static ::UnityEngine::Color* StaticGet_k_Blackf()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x13724);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x13734);
		}
		// static const ::System::String* k_FacePickerOcclusionTintUniform; // 0x0
		// static const ::System::UInt32 k_PickerHashNone = 0x0; // 0x0
		// static const ::System::UInt32 k_PickerHashMin = 0x1; // 0x0
		// static const ::System::UInt32 k_PickerHashMax = 0xFFFFFF; // 0x0
		// static const ::System::UInt32 k_MinEdgePixelsForValidSelection = 0x1; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::RenderTextureFormat get_renderTextureFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_RENDERTEXTUREFORMAT_OFFSET))();
		}

		static ::UnityEngine::TextureFormat get_textureFormat()
		{
			return ((::UnityEngine::TextureFormat(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_TEXTUREFORMAT_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer* get_pickerRenderer()
		{
			return ((::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_PICKERRENDERER_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKFACESINRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* PickVerticesInRect(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKVERTICESINRECT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKEDGESINRECT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Texture2D* RenderSelectionPickerTexture(::UnityEngine::Camera* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*& a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Texture2D* RenderSelectionPickerTexture_1(::UnityEngine::Camera* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*& a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Texture2D* RenderSelectionPickerTexture_2(::UnityEngine::Camera* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*& a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* GenerateFacePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*& a2)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEFACEPICKINGOBJECTS_OFFSET))(a1, a2);
		}

		static ::System::Void GenerateVertexPickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*& a3, ::Il2CppArray<::UnityEngine::GameObject*>*& a4, ::Il2CppArray<::UnityEngine::GameObject*>*& a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEVERTEXPICKINGOBJECTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GenerateEdgePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*& a3, ::Il2CppArray<::UnityEngine::GameObject*>*& a4, ::Il2CppArray<::UnityEngine::GameObject*>*& a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEEDGEPICKINGOBJECTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Mesh* BuildVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>* a2, ::System::UInt32& a3)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDVERTEXMESH_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* BuildEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>* a2, ::System::UInt32& a3)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDEDGEMESH_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 DecodeRGBA(::UnityEngine::Color32 a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_DECODERGBA_OFFSET))(a1);
		}

		static ::UnityEngine::Color32 EncodeRGBA(::System::UInt32 a1)
		{
			return ((::UnityEngine::Color32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_ENCODERGBA_OFFSET))(a1);
		}

		static ::System::Boolean ShouldUseHDRP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SHOULDUSEHDRP_OFFSET))();
		}
	};
}
