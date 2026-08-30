#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_2.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/VLB/MeshType.h"

class Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace VLB { class VolumetricLightBeam; }

#define VLB_BEAMGEOMETRY_GET_CONEMESH_OFFSET UNITYSDK_OFFSET(0x105022D0)
#define VLB_BEAMGEOMETRY_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x105022B0)
#define VLB_BEAMGEOMETRY_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x10502290)
#define VLB_BEAMGEOMETRY_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x10502330)
#define VLB_BEAMGEOMETRY_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x10502380)
#define VLB_BEAMGEOMETRY_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x105022F0)
#define VLB_BEAMGEOMETRY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10502AE0)
#define VLB_BEAMGEOMETRY_METHOD_5_0839ABB041C2D671_OFFSET UNITYSDK_OFFSET(0x105054D0)
#define VLB_BEAMGEOMETRY_METHOD_5_318C71A4BA509D02_OFFSET UNITYSDK_OFFSET(0x10504E10)
#define VLB_BEAMGEOMETRY_METHOD_5_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x105050C0)
#define VLB_BEAMGEOMETRY_METHOD_5_3F6DD32D583A9FCF_OFFSET UNITYSDK_OFFSET(0x10504CB0)
#define VLB_BEAMGEOMETRY_METHOD_5_4912599A9CBB011C_OFFSET UNITYSDK_OFFSET(0x10504FF0)
#define VLB_BEAMGEOMETRY_METHOD_5_7BCD4E2F1093FC06_OFFSET UNITYSDK_OFFSET(0x105054C0)
#define VLB_BEAMGEOMETRY_METHOD_5_7C1FB31481CF83B2_OFFSET UNITYSDK_OFFSET(0x10504EB0)
#define VLB_BEAMGEOMETRY_METHOD_5_8BA81D51FB5D5B30_OFFSET UNITYSDK_OFFSET(0x10502E70)
#define VLB_BEAMGEOMETRY_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10504BB0)
#define VLB_BEAMGEOMETRY_METHOD_5_CCED8C9A4E131333_OFFSET UNITYSDK_OFFSET(0x105025A0)
#define VLB_BEAMGEOMETRY_METHOD_5_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x10504D80)
#define VLB_BEAMGEOMETRY_METHOD_5_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x10502500)
#define VLB_BEAMGEOMETRY_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10504D50)
#define VLB_BEAMGEOMETRY_METHOD_5_F760BA633AF61E98_OFFSET UNITYSDK_OFFSET(0x10504F50)
#define VLB_BEAMGEOMETRY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x105024D0)
#define VLB_BEAMGEOMETRY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10502910)
#define VLB_BEAMGEOMETRY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10502740)
#define VLB_BEAMGEOMETRY_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x10505B50)
#define VLB_BEAMGEOMETRY_REGENERATEMESH_OFFSET UNITYSDK_OFFSET(0x10503120)
#define VLB_BEAMGEOMETRY_SETCLIPPINGPLANEOFF_OFFSET UNITYSDK_OFFSET(0x10505480)
#define VLB_BEAMGEOMETRY_SETCLIPPINGPLANE_OFFSET UNITYSDK_OFFSET(0x10505430)
#define VLB_BEAMGEOMETRY_SET_CONEMESH_OFFSET UNITYSDK_OFFSET(0x105022E0)
#define VLB_BEAMGEOMETRY_SET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x105022C0)
#define VLB_BEAMGEOMETRY_SET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x105022A0)
#define VLB_BEAMGEOMETRY_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x10502350)
#define VLB_BEAMGEOMETRY_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x105023A0)
#define VLB_BEAMGEOMETRY_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x10502310)
#define VLB_BEAMGEOMETRY_START_OFFSET UNITYSDK_OFFSET(0x105023D0)
#define VLB_BEAMGEOMETRY_SYNCMATERIAL_OFFSET UNITYSDK_OFFSET(0x10504DD0)
#define VLB_BEAMGEOMETRY_UPDATEMATERIALANDBOUNDS_OFFSET UNITYSDK_OFFSET(0x105033E0)
#define VLB_BEAMGEOMETRY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x10505180)
#define VLB_BEAMGEOMETRY__CTOR_OFFSET UNITYSDK_OFFSET(0x10505E60)

namespace VLB
{
	inline static constexpr unsigned int BeamGeometry_TypeDefinitionIndex = 49409;

	class BeamGeometry : public ::UnityEngine::MonoBehaviour
	{
	public:
		::VLB::VolumetricLightBeam* KNCIKKHBPPJ; // 0x18
		::UnityEngine::Matrix4x4 GCLFIELNAEG; // 0x20
		::VLB::MeshType MHGKGPLNFDK; // 0x60
		::UnityEngine::Material* OFEIJIAHFHI; // 0x68
		::UnityEngine::MeshRenderer* _meshRenderer_k__BackingField; // 0x70
		::UnityEngine::MeshFilter* _meshFilter_k__BackingField; // 0x78
		::UnityEngine::Mesh* _coneMesh_k__BackingField; // 0x80
		::Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451* PHMBKJPIPCN; // 0x88
		::UnityEngine::Plane BBKFDIMGPII; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY__CTOR_OFFSET))(this);
		}

		::UnityEngine::MeshRenderer* get_meshRenderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_MESHRENDERER_OFFSET))(this);
		}

		::System::Void set_meshRenderer(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_MESHRENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::MeshFilter* get_meshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_MESHFILTER_OFFSET))(this);
		}

		::System::Void set_meshFilter(::UnityEngine::MeshFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_MESHFILTER_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_coneMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_CONEMESH_OFFSET))(this);
		}

		::System::Void set_coneMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_CONEMESH_OFFSET))(this, a1);
		}

		::System::Boolean get_visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_SORTINGLAYERID_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SET_SORTINGORDER_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONDESTROY_OFFSET))(this);
		}

		static ::System::Boolean Method_5_CE34EA208837238D()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_CE34EA208837238D_OFFSET))();
		}

		::UnityEngine::GCFreeClosure::ActionClosure_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*> Method_5_CCED8C9A4E131333()
		{
			return ((::UnityEngine::GCFreeClosure::ActionClosure_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_CCED8C9A4E131333_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONDISABLE_OFFSET))(this);
		}

		::System::Void Initialize(::VLB::VolumetricLightBeam* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::VLB::VolumetricLightBeam*, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void RegenerateMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_REGENERATEMESH_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Boolean Method_5_3F6DD32D583A9FCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_3F6DD32D583A9FCF_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_5_CE18697B63E52504()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_CE18697B63E52504_OFFSET))(this);
		}

		::System::Boolean Method_5_8BA81D51FB5D5B30()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_8BA81D51FB5D5B30_OFFSET))(this);
		}

		::System::Void SyncMaterial(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SYNCMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Method_5_318C71A4BA509D02(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_318C71A4BA509D02_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7C1FB31481CF83B2(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_7C1FB31481CF83B2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_F760BA633AF61E98(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_F760BA633AF61E98_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4912599A9CBB011C(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_4912599A9CBB011C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_3C56C1AF247AC1EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_3C56C1AF247AC1EC_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMaterialAndBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_UPDATEMATERIALANDBOUNDS_OFFSET))(this);
		}

		::System::Void SetClippingPlane(::UnityEngine::Plane a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Plane))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SETCLIPPINGPLANE_OFFSET))(this, a1);
		}

		::System::Void SetClippingPlaneOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_SETCLIPPINGPLANEOFF_OFFSET))(this);
		}

		::System::Void Method_5_7BCD4E2F1093FC06(::UnityEngine::Rendering::ScriptableRenderContext a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_7BCD4E2F1093FC06_OFFSET))(this, a1, a2);
		}

		::System::Void OnWillRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_ONWILLRENDEROBJECT_OFFSET))(this);
		}

		::System::Void Method_5_0839ABB041C2D671(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + VLB_BEAMGEOMETRY_METHOD_5_0839ABB041C2D671_OFFSET))(this, a1);
		}
	};
}
