#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/SpriteMeshType.h"
#include "unitysdk/UnityEngine/SpritePackingMode.h"
#include "unitysdk/UnityEngine/SpritePackingRotation.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C88E0)
#define UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_OFFSET UNITYSDK_OFFSET(0x1B4C88C0)
#define UNITYENGINE_SPRITE_CREATESPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C8940)
#define UNITYENGINE_SPRITE_CREATESPRITE_OFFSET UNITYSDK_OFFSET(0x1B4C88F0)
#define UNITYENGINE_SPRITE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B4C9250)
#define UNITYENGINE_SPRITE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1B4C9280)
#define UNITYENGINE_SPRITE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1B4C9670)
#define UNITYENGINE_SPRITE_CREATE_4_OFFSET UNITYSDK_OFFSET(0x1B4C96D0)
#define UNITYENGINE_SPRITE_CREATE_5_OFFSET UNITYSDK_OFFSET(0x1B4C9720)
#define UNITYENGINE_SPRITE_CREATE_6_OFFSET UNITYSDK_OFFSET(0x1B4C9770)
#define UNITYENGINE_SPRITE_CREATE_7_OFFSET UNITYSDK_OFFSET(0x1B4C97C0)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B4C9220)
#define UNITYENGINE_SPRITE_GETINNERUVS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C8810)
#define UNITYENGINE_SPRITE_GETINNERUVS_OFFSET UNITYSDK_OFFSET(0x1B4C87D0)
#define UNITYENGINE_SPRITE_GETOUTERUVS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C8860)
#define UNITYENGINE_SPRITE_GETOUTERUVS_OFFSET UNITYSDK_OFFSET(0x1B4C8820)
#define UNITYENGINE_SPRITE_GETPACKED_OFFSET UNITYSDK_OFFSET(0x1B4C8730)
#define UNITYENGINE_SPRITE_GETPACKINGMODE_OFFSET UNITYSDK_OFFSET(0x1B4C8710)
#define UNITYENGINE_SPRITE_GETPACKINGROTATION_OFFSET UNITYSDK_OFFSET(0x1B4C8720)
#define UNITYENGINE_SPRITE_GETPADDING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C88B0)
#define UNITYENGINE_SPRITE_GETPADDING_OFFSET UNITYSDK_OFFSET(0x1B4C8870)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C8BF0)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPEIMPL_OFFSET UNITYSDK_OFFSET(0x1B4C8DB0)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPEPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C8C00)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPE_OFFSET UNITYSDK_OFFSET(0x1B4C8CD0)
#define UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C87C0)
#define UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1B4C8790)
#define UNITYENGINE_SPRITE_GETTEXTURERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C8780)
#define UNITYENGINE_SPRITE_GETTEXTURERECT_OFFSET UNITYSDK_OFFSET(0x1B4C8740)
#define UNITYENGINE_SPRITE_GET_ASSOCIATEDALPHASPLITTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B4C8A80)
#define UNITYENGINE_SPRITE_GET_BORDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C8A40)
#define UNITYENGINE_SPRITE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x1B4C8A00)
#define UNITYENGINE_SPRITE_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C89A0)
#define UNITYENGINE_SPRITE_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1B4C8950)
#define UNITYENGINE_SPRITE_GET_PACKED_OFFSET UNITYSDK_OFFSET(0x1B4C8AD0)
#define UNITYENGINE_SPRITE_GET_PACKINGMODE_OFFSET UNITYSDK_OFFSET(0x1B4C8AF0)
#define UNITYENGINE_SPRITE_GET_PACKINGROTATION_OFFSET UNITYSDK_OFFSET(0x1B4C8B00)
#define UNITYENGINE_SPRITE_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C8AC0)
#define UNITYENGINE_SPRITE_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1B4C8A90)
#define UNITYENGINE_SPRITE_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B4C8A60)
#define UNITYENGINE_SPRITE_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B4C89F0)
#define UNITYENGINE_SPRITE_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1B4C89B0)
#define UNITYENGINE_SPRITE_GET_SPRITEATLASTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1B4C8A70)
#define UNITYENGINE_SPRITE_GET_TEXTURERECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1B4C8B70)
#define UNITYENGINE_SPRITE_GET_TEXTURERECT_OFFSET UNITYSDK_OFFSET(0x1B4C8B10)
#define UNITYENGINE_SPRITE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B4C8A50)
#define UNITYENGINE_SPRITE_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B4C8BD0)
#define UNITYENGINE_SPRITE_GET_UV_OFFSET UNITYSDK_OFFSET(0x1B4C8BE0)
#define UNITYENGINE_SPRITE_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1B4C8BC0)
#define UNITYENGINE_SPRITE_INTERNAL_GETPHYSICSSHAPEPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C8CC0)
#define UNITYENGINE_SPRITE_OVERRIDEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B4C9210)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C91F0)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_1_OFFSET UNITYSDK_OFFSET(0x1B4C9200)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET UNITYSDK_OFFSET(0x1B4C8DC0)
#define UNITYENGINE_SPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C86C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Sprite_TypeDefinitionIndex = 5423;

	class Sprite : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetPackingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKINGMODE_OFFSET))(this);
		}

		::System::Int32 GetPackingRotation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKINGROTATION_OFFSET))(this);
		}

		::System::Int32 GetPacked()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKED_OFFSET))(this);
		}

		::UnityEngine::Rect GetTextureRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetTextureRectOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetInnerUVs()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETINNERUVS_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetOuterUVs()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETOUTERUVS_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetPadding()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPADDING_OFFSET))(this);
		}

		static ::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsToUnits, ::UnityEngine::Texture2D* texture)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_OFFSET))(rect, pivot, pixelsToUnits, texture);
		}

		static ::UnityEngine::Sprite* CreateSprite(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsPerUnit, ::System::UInt32 extrude, ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, ::System::Boolean generateFallbackPhysicsShape)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITE_OFFSET))(texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BOUNDS_OFFSET))(this);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_RECT_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_border()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BORDER_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURE_OFFSET))(this);
		}

		::System::Single get_pixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Single get_spriteAtlasTextureScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_SPRITEATLASTEXTURESCALE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_associatedAlphaSplitTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_ASSOCIATEDALPHASPLITTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_pivot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIVOT_OFFSET))(this);
		}

		::System::Boolean get_packed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKED_OFFSET))(this);
		}

		::UnityEngine::SpritePackingMode get_packingMode()
		{
			return ((::UnityEngine::SpritePackingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKINGMODE_OFFSET))(this);
		}

		::UnityEngine::SpritePackingRotation get_packingRotation()
		{
			return ((::UnityEngine::SpritePackingRotation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKINGROTATION_OFFSET))(this);
		}

		::UnityEngine::Rect get_textureRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURERECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_textureRectOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURERECTOFFSET_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_VERTICES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt16>* get_triangles()
		{
			return ((::Il2CppArray<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TRIANGLES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_UV_OFFSET))(this);
		}

		::System::Int32 GetPhysicsShapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPECOUNT_OFFSET))(this);
		}

		::System::Int32 GetPhysicsShapePointCount(::System::Int32 shapeIdx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPEPOINTCOUNT_OFFSET))(this, shapeIdx);
		}

		::System::Int32 Internal_GetPhysicsShapePointCount(::System::Int32 shapeIdx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_INTERNAL_GETPHYSICSSHAPEPOINTCOUNT_OFFSET))(this, shapeIdx);
		}

		::System::Int32 GetPhysicsShape(::System::Int32 shapeIdx, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPE_OFFSET))(this, shapeIdx, physicsShape);
		}

		static ::System::Void GetPhysicsShapeImpl(::UnityEngine::Sprite* sprite, ::System::Int32 shapeIdx, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape)
		{
			return ((::System::Void(*)(::UnityEngine::Sprite*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPEIMPL_OFFSET))(sprite, shapeIdx, physicsShape);
		}

		::System::Void OverridePhysicsShape(::System::Collections::Generic::IList_1<::Il2CppArray<::UnityEngine::Vector2>*>* physicsShapes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Il2CppArray<::UnityEngine::Vector2>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET))(this, physicsShapes);
		}

		static ::System::Void OverridePhysicsShapeCount(::UnityEngine::Sprite* sprite, ::System::Int32 physicsShapeCount)
		{
			return ((::System::Void(*)(::UnityEngine::Sprite*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPECOUNT_OFFSET))(sprite, physicsShapeCount);
		}

		static ::System::Void OverridePhysicsShape_1(::UnityEngine::Sprite* sprite, ::Il2CppArray<::UnityEngine::Vector2>* physicsShape, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::UnityEngine::Sprite*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_1_OFFSET))(sprite, physicsShape, idx);
		}

		::System::Void OverrideGeometry(::Il2CppArray<::UnityEngine::Vector2>* vertices, ::Il2CppArray<::System::UInt16>* triangles)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::UInt16>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEGEOMETRY_OFFSET))(this, vertices, triangles);
		}

		static ::UnityEngine::Sprite* Create(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsToUnits, ::UnityEngine::Texture2D* texture)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(rect, pivot, pixelsToUnits, texture);
		}

		static ::UnityEngine::Sprite* Create_1(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsToUnits)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_1_OFFSET))(rect, pivot, pixelsToUnits);
		}

		static ::UnityEngine::Sprite* Create_2(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsPerUnit, ::System::UInt32 extrude, ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, ::System::Boolean generateFallbackPhysicsShape)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_2_OFFSET))(texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape);
		}

		static ::UnityEngine::Sprite* Create_3(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsPerUnit, ::System::UInt32 extrude, ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_3_OFFSET))(texture, rect, pivot, pixelsPerUnit, extrude, meshType, border);
		}

		static ::UnityEngine::Sprite* Create_4(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsPerUnit, ::System::UInt32 extrude, ::UnityEngine::SpriteMeshType meshType)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_4_OFFSET))(texture, rect, pivot, pixelsPerUnit, extrude, meshType);
		}

		static ::UnityEngine::Sprite* Create_5(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsPerUnit, ::System::UInt32 extrude)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_5_OFFSET))(texture, rect, pivot, pixelsPerUnit, extrude);
		}

		static ::UnityEngine::Sprite* Create_6(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, ::System::Single pixelsPerUnit)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_6_OFFSET))(texture, rect, pivot, pixelsPerUnit);
		}

		static ::UnityEngine::Sprite* Create_7(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_7_OFFSET))(texture, rect, pivot);
		}

		::System::Void GetTextureRect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetTextureRectOffset_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetInnerUVs_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETINNERUVS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetOuterUVs_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETOUTERUVS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetPadding_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPADDING_INJECTED_OFFSET))(this, ret);
		}

		static ::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting_Injected(::UnityEngine::Rect& rect, ::UnityEngine::Vector2& pivot, ::System::Single pixelsToUnits, ::UnityEngine::Texture2D* texture)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_INJECTED_OFFSET))(rect, pivot, pixelsToUnits, texture);
		}

		static ::UnityEngine::Sprite* CreateSprite_Injected(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect& rect, ::UnityEngine::Vector2& pivot, ::System::Single pixelsPerUnit, ::System::UInt32 extrude, ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4& border, ::System::Boolean generateFallbackPhysicsShape)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect&, ::UnityEngine::Vector2&, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITE_INJECTED_OFFSET))(texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_RECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_border_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BORDER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIVOT_INJECTED_OFFSET))(this, ret);
		}
	};
}
