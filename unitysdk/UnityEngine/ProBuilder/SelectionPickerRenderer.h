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

#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDEDGEMESH_OFFSET UNITYSDK_OFFSET(0x1A2C60E0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDVERTEXMESH_OFFSET UNITYSDK_OFFSET(0x1A2C53A0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_DECODERGBA_OFFSET UNITYSDK_OFFSET(0x1A2C3140)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_ENCODERGBA_OFFSET UNITYSDK_OFFSET(0x1A2C5330)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEEDGEPICKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A2C4D00)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEFACEPICKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A2C3AC0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEVERTEXPICKINGOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A2C46D0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_PICKERRENDERER_OFFSET UNITYSDK_OFFSET(0x1A2C2C90)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_RENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1A2C2AA0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GET_TEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1A2C2C80)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKEDGESINRECT_OFFSET UNITYSDK_OFFSET(0x1A2C22C0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKFACESINRECT_OFFSET UNITYSDK_OFFSET(0x1A2C1000)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKVERTICESINRECT_OFFSET UNITYSDK_OFFSET(0x1A2BE870)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A2C3180)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1A2C36B0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A2C2DC0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SHOULDUSEHDRP_OFFSET UNITYSDK_OFFSET(0x1A2C2D90)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2C6940)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionPickerRenderer_TypeDefinitionIndex = 39975;

	class SelectionPickerRenderer : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer** StaticGet_s_PickerRenderer()
		{
			return (::UnityEngine::ProBuilder::SelectionPickerRenderer_ISelectionPickerRenderer**)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x2A160);
		}
		static ::Il2CppArray<::UnityEngine::RenderTextureFormat>** StaticGet_s_PreferredFormats()
		{
			return (::Il2CppArray<::UnityEngine::RenderTextureFormat>**)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0x2A168);
		}
		static ::System::Boolean* StaticGet_s_Initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0xB3C0);
		}
		static ::UnityEngine::Color* StaticGet_k_Blackf()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0xB3C4);
		}
		static ::UnityEngine::RenderTextureFormat* StaticGet_s_RenderTextureFormat()
		{
			return (::UnityEngine::RenderTextureFormat*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0xB3D4);
		}
		static ::UnityEngine::Color* StaticGet_k_Whitef()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer_TypeDefinitionIndex)->GetStaticField(0xB3D8);
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

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Int32 renderTextureWidth, ::System::Int32 renderTextureHeight)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKFACESINRECT_OFFSET))(camera, pickerRect, selection, renderTextureWidth, renderTextureHeight);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* PickVerticesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Boolean doDepthTest, ::System::Int32 renderTextureWidth, ::System::Int32 renderTextureHeight)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKVERTICESINRECT_OFFSET))(camera, pickerRect, selection, doDepthTest, renderTextureWidth, renderTextureHeight);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Boolean doDepthTest, ::System::Int32 renderTextureWidth, ::System::Int32 renderTextureHeight)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_PICKEDGESINRECT_OFFSET))(camera, pickerRect, selection, doDepthTest, renderTextureWidth, renderTextureHeight);
		}

		static ::UnityEngine::Texture2D* RenderSelectionPickerTexture(::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*& map, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_OFFSET))(camera, selection, map, width, height);
		}

		static ::UnityEngine::Texture2D* RenderSelectionPickerTexture_1(::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Boolean doDepthTest, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*& map, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_1_OFFSET))(camera, selection, doDepthTest, map, width, height);
		}

		static ::UnityEngine::Texture2D* RenderSelectionPickerTexture_2(::UnityEngine::Camera* camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Boolean doDepthTest, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*& map, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Camera*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_RENDERSELECTIONPICKERTEXTURE_2_OFFSET))(camera, selection, doDepthTest, map, width, height);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* GenerateFacePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*& map)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*>>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEFACEPICKINGOBJECTS_OFFSET))(selection, map);
		}

		static ::System::Void GenerateVertexPickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Boolean doDepthTest, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*& map, ::Il2CppArray<::UnityEngine::GameObject*>*& depthObjects, ::Il2CppArray<::UnityEngine::GameObject*>*& pickerObjects)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEVERTEXPICKINGOBJECTS_OFFSET))(selection, doDepthTest, map, depthObjects, pickerObjects);
		}

		static ::System::Void GenerateEdgePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selection, ::System::Boolean doDepthTest, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*& map, ::Il2CppArray<::UnityEngine::GameObject*>*& depthObjects, ::Il2CppArray<::UnityEngine::GameObject*>*& pickerObjects)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&, ::Il2CppArray<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_GENERATEEDGEPICKINGOBJECTS_OFFSET))(selection, doDepthTest, map, depthObjects, pickerObjects);
		}

		static ::UnityEngine::Mesh* BuildVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>* map, ::System::UInt32& index)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32>>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDVERTEXMESH_OFFSET))(pb, map, index);
		}

		static ::UnityEngine::Mesh* BuildEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>* map, ::System::UInt32& index)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge>>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_BUILDEDGEMESH_OFFSET))(pb, map, index);
		}

		static ::System::UInt32 DecodeRGBA(::UnityEngine::Color32 color)
		{
			return ((::System::UInt32(*)(::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_DECODERGBA_OFFSET))(color);
		}

		static ::UnityEngine::Color32 EncodeRGBA(::System::UInt32 hash)
		{
			return ((::UnityEngine::Color32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_ENCODERGBA_OFFSET))(hash);
		}

		static ::System::Boolean ShouldUseHDRP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER_SHOULDUSEHDRP_OFFSET))();
		}
	};
}
