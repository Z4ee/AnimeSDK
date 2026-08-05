#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/DecalProjector_UVMirrorType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector_Triangle; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalSystem_DecalHandle; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ADD_ONMATERIALCHANGE_OFFSET UNITYSDK_OFFSET(0x1D304F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1D304F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D305190)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVANIMATION_OFFSET UNITYSDK_OFFSET(0x1D3028A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVOFFSET_OFFSET UNITYSDK_OFFSET(0x1D302390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVSCALEANDBIAS_OFFSET UNITYSDK_OFFSET(0x1D3028F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETMATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1D3056F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALOFFSET_OFFSET UNITYSDK_OFFSET(0x1D302B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALSIZE_OFFSET UNITYSDK_OFFSET(0x1D302B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D301B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x1D301540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_EMISSIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D301CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_FADEFACTOR_OFFSET UNITYSDK_OFFSET(0x1D302620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D302C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1D301A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MIRRORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D301AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x1D302750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_NORMALBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D301C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D301FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1D302AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATESPEED_OFFSET UNITYSDK_OFFSET(0x1D3021F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1D302970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D302120)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_S_WATERPROXYPREVIEW_OFFSET UNITYSDK_OFFSET(0x1D301420)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVBIAS_OFFSET UNITYSDK_OFFSET(0x1D301C00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALEBIAS_OFFSET UNITYSDK_OFFSET(0x1D302C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALE_OFFSET UNITYSDK_OFFSET(0x1D301BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_HASANIMATION_OFFSET UNITYSDK_OFFSET(0x1D304D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_INTERSECTTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1D305DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D305040)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDBAKEDECALMESH_OFFSET UNITYSDK_OFFSET(0x1D3014E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDWATERPOOLBAKE_OFFSET UNITYSDK_OFFSET(0x1D301480)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D304950)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D304B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D302CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x1D3015A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D3020C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_PREPAREFORQUADMESHDECAL_OFFSET UNITYSDK_OFFSET(0x1D303620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHDECALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D305230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHMESHDECALVALUE_OFFSET UNITYSDK_OFFSET(0x1D303BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REMOVE_ONMATERIALCHANGE_OFFSET UNITYSDK_OFFSET(0x1D304FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x1D302410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D301DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D301B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x1D301550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_EMISSIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D301CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_FADEFACTOR_OFFSET UNITYSDK_OFFSET(0x1D302630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D302CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1D301A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MIRRORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D301AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x1D302760)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_NORMALBLENDINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D301C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D302010)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_ROTATESPEED_OFFSET UNITYSDK_OFFSET(0x1D302200)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D302140)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVBIAS_OFFSET UNITYSDK_OFFSET(0x1D301C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVSCALE_OFFSET UNITYSDK_OFFSET(0x1D301BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TESTTRIANGLEHIT_OFFSET UNITYSDK_OFFSET(0x1D3057F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D306280)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D306190)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalProjector_TypeDefinitionIndex = 27665;

	class DecalProjector : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_s_GlobalQuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x23A70);
		}
		static ::System::Int32* StaticGet__MaskMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73E0);
		}
		static ::System::Int32* StaticGet__NewDrawOrder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73E4);
		}
		static ::System::Int32* StaticGet__NormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73E8);
		}
		static ::System::Int32* StaticGet__QuadMeshUVScaleBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73EC);
		}
		static ::System::Int32* StaticGet__QuadMeshNormalToWorldMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73F0);
		}
		static ::System::Int32* StaticGet__QuadMeshSizeScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73F4);
		}
		static ::System::Int32* StaticGet__ParallaxMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73F8);
		}
		static ::UnityEngine::Quaternion* StaticGet_k_MinusYtoZRotation()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(DecalProjector_TypeDefinitionIndex)->GetStaticField(0x73FC);
		}
		::System::Boolean hasOverlapNotMergeMesh; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::Internal::DecalProjector*>* m_CombinedProjector; // 0x20
		::System::Boolean m_IsWaterProxy; // 0x28
		::System::Boolean m_IsMeshDecal; // 0x29
		::System::Boolean m_IsCombinedDecal; // 0x2A
		::System::Int32 m_BakeMeshOffset; // 0x2C
		::System::Int32 m_DrawOrder; // 0x30
		::System::Int32 m_Importance; // 0x34
		::UnityEngine::Material* m_Material; // 0x38
		::System::Single m_DrawDistance; // 0x40
		::UnityEngine::Vector2 m_UVScale; // 0x44
		::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType m_MirrorTexture; // 0x4C
		::UnityEngine::Vector2 m_UVBias; // 0x50
		::System::Single m_NormalBlendIntensity; // 0x58
		::System::Single m_EmissionIntensity; // 0x5C
		::UnityEngine::Vector3 m_Offset; // 0x60
		::UnityEngine::Vector3 m_Size; // 0x6C
		::System::Single m_FadeFactor; // 0x78
		::System::Single m_RotateSpeed; // 0x7C
		::System::Single m_MoveSpeed; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* tempTriangles; // 0x88
		::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* m_Handle; // 0x90
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x98
		::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0xA0
		::System::Boolean needDestroyMaterial; // 0xA8
		::System::Action* OnMaterialChange; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_s_WaterProxyPreview()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_S_WATERPROXYPREVIEW_OFFSET))();
		}

		::System::Boolean NeedWaterPoolBake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDWATERPOOLBAKE_OFFSET))(this);
		}

		::System::Boolean NeedBakeDecalMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_NEEDBAKEDECALMESH_OFFSET))(this);
		}

		::System::Int32 get_DrawOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWORDER_OFFSET))(this);
		}

		::System::Void set_DrawOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWORDER_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType get_mirrorTexture()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MIRRORTEXTURE_OFFSET))(this);
		}

		::System::Void set_mirrorTexture(::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_UVMirrorType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MIRRORTEXTURE_OFFSET))(this, value);
		}

		::System::Single get_drawDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DRAWDISTANCE_OFFSET))(this);
		}

		::System::Void set_drawDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_DRAWDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvScale()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALE_OFFSET))(this);
		}

		::System::Void set_uvScale(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvBias()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVBIAS_OFFSET))(this);
		}

		::System::Void set_uvBias(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_UVBIAS_OFFSET))(this, value);
		}

		::System::Single get_normalBlendIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_NORMALBLENDINTENSITY_OFFSET))(this);
		}

		::System::Void set_normalBlendIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_NORMALBLENDINTENSITY_OFFSET))(this, value);
		}

		::System::Single get_emissionIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_EMISSIONINTENSITY_OFFSET))(this);
		}

		::System::Void set_emissionIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_EMISSIONINTENSITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_offset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_offset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_OFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_SIZE_OFFSET))(this, value);
		}

		::System::Single get_rotateSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATESPEED_OFFSET))(this);
		}

		::System::Void set_rotateSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_ROTATESPEED_OFFSET))(this, value);
		}

		::System::Single get_fadeFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_FADEFACTOR_OFFSET))(this);
		}

		::System::Void set_fadeFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_FADEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_moveSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_MOVESPEED_OFFSET))(this);
		}

		::System::Void set_moveSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_MOVESPEED_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 GetDecalUVOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetDecalUVAnimation()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVANIMATION_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetDecalUVScaleAndBias()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETDECALUVSCALEANDBIAS_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_ROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_decalSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_decalOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_DECALOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_uvScaleBias()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_UVSCALEBIAS_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* get_Handle()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::DecalSystem_DecalHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SET_HANDLE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshMeshDecalValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHMESHDECALVALUE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONPROPERTYCHANGE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean HasAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_HASANIMATION_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* AnimationCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ANIMATIONCURVE_OFFSET))(this);
		}

		::System::Void PrepareForQuadMeshDecal(::System::Boolean forceReCreate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_PREPAREFORQUADMESHDECAL_OFFSET))(this, forceReCreate);
		}

		::System::Void add_OnMaterialChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ADD_ONMATERIALCHANGE_OFFSET))(this, value);
		}

		::System::Void remove_OnMaterialChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REMOVE_ONMATERIALCHANGE_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_ISVALID_OFFSET))(this);
		}

		::System::Void SetProperty(::System::Int32 id, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_OFFSET))(this, id, value);
		}

		::System::Void SetProperty_1(::System::Int32 id, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_SETPROPERTY_1_OFFSET))(this, id, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshDecalTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_REFRESHDECALTRANSFORM_OFFSET))(this);
		}

		::System::Boolean GetMatchIndex(::UnityEngine::Vector3 sourceP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::System::Int32& matchIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_GETMATCHINDEX_OFFSET))(this, sourceP, vertices, matchIndex);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*, ::System::Boolean>* TestTriangleHit(::UnityEngine::Vector3 realCubeSize, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>* validTriangleListStage0)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*, ::System::Boolean>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::DecalProjector_Triangle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_TESTTRIANGLEHIT_OFFSET))(this, realCubeSize, validTriangleListStage0);
		}

		static ::System::Boolean IntersectTriangle(::UnityEngine::Vector3 orig, ::UnityEngine::Vector3 dir, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3& hitPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_INTERSECTTRIANGLE_OFFSET))(orig, dir, v0, v1, v2, hitPoint);
		}
	};
}
