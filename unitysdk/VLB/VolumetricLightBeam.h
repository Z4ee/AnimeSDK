#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightTAMonoPluginBase_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/VLB/AttenuationEquation.h"
#include "unitysdk/VLB/BlendingMode.h"
#include "unitysdk/VLB/ColorMode.h"
#include "unitysdk/VLB/MeshType.h"

class Class_4_0200DDD1DEC4CA99;
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace VLB { class BeamGeometry; }

#define VLB_VOLUMETRICLIGHTBEAM_ASSIGNPROPERTIESFROMSPOTLIGHT_OFFSET UNITYSDK_OFFSET(0xB9B0780)
#define VLB_VOLUMETRICLIGHTBEAM_CLAMPPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB9B0840)
#define VLB_VOLUMETRICLIGHTBEAM_DESTROYBEAM_OFFSET UNITYSDK_OFFSET(0xB9B06D0)
#define VLB_VOLUMETRICLIGHTBEAM_DOPLAYTIMEUPDATE_OFFSET UNITYSDK_OFFSET(0xB9B0310)
#define VLB_VOLUMETRICLIGHTBEAM_GENERATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB9AF5B0)
#define VLB_VOLUMETRICLIGHTBEAM_GENERATE_OFFSET UNITYSDK_OFFSET(0xB9AF5A0)
#define VLB_VOLUMETRICLIGHTBEAM_GETINSIDEBEAMFACTORFROMOBJECTSPACEPOS_OFFSET UNITYSDK_OFFSET(0xB9AE1A0)
#define VLB_VOLUMETRICLIGHTBEAM_GETINSIDEBEAMFACTOR_OFFSET UNITYSDK_OFFSET(0xB9AF520)
#define VLB_VOLUMETRICLIGHTBEAM_GET_ATTENUATIONLERPLINEARQUAD_OFFSET UNITYSDK_OFFSET(0xB9AD9A0)
#define VLB_VOLUMETRICLIGHTBEAM_GET_BLENDINGMODEASINT_OFFSET UNITYSDK_OFFSET(0xB9AEF60)
#define VLB_VOLUMETRICLIGHTBEAM_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xB9AEC50)
#define VLB_VOLUMETRICLIGHTBEAM_GET_CONEANGLE_OFFSET UNITYSDK_OFFSET(0xB9AD8B0)
#define VLB_VOLUMETRICLIGHTBEAM_GET_CONEAPEXOFFSETZ_OFFSET UNITYSDK_OFFSET(0xB9AD910)
#define VLB_VOLUMETRICLIGHTBEAM_GET_CONERADIUSEND_OFFSET UNITYSDK_OFFSET(0xB9AD1F0)
#define VLB_VOLUMETRICLIGHTBEAM_GET_CONEVOLUME_OFFSET UNITYSDK_OFFSET(0xB9AE8B0)
#define VLB_VOLUMETRICLIGHTBEAM_GET_GEOMSEGMENTS_OFFSET UNITYSDK_OFFSET(0xB9AE980)
#define VLB_VOLUMETRICLIGHTBEAM_GET_GEOMSIDES_OFFSET UNITYSDK_OFFSET(0xB9AE930)
#define VLB_VOLUMETRICLIGHTBEAM_GET_HASGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB9AEC30)
#define VLB_VOLUMETRICLIGHTBEAM_GET_ISCURRENTLYTRACKINGCHANGES_OFFSET UNITYSDK_OFFSET(0xB9AEC20)
#define VLB_VOLUMETRICLIGHTBEAM_GET_LIGHTSPOTATTACHED_OFFSET UNITYSDK_OFFSET(0xB9AF450)
#define VLB_VOLUMETRICLIGHTBEAM_GET_MESHSTATS_OFFSET UNITYSDK_OFFSET(0xB9AF230)
#define VLB_VOLUMETRICLIGHTBEAM_GET_MESHTRIANGLESCOUNT_OFFSET UNITYSDK_OFFSET(0xB9AF3F0)
#define VLB_VOLUMETRICLIGHTBEAM_GET_MESHVERTICESCOUNT_OFFSET UNITYSDK_OFFSET(0xB9AF3C0)
#define VLB_VOLUMETRICLIGHTBEAM_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xB9AE9D0)
#define VLB_VOLUMETRICLIGHTBEAM_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0xB9AEA20)
#define VLB_VOLUMETRICLIGHTBEAM_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB9AEA90)
#define VLB_VOLUMETRICLIGHTBEAM_GET_TRACKCHANGESDURINGPLAYTIME_OFFSET UNITYSDK_OFFSET(0xB9AEAE0)
#define VLB_VOLUMETRICLIGHTBEAM_GET__INTERNAL_INSTANCEDMATERIALGROUPID_OFFSET UNITYSDK_OFFSET(0xB9AF100)
#define VLB_VOLUMETRICLIGHTBEAM_HANDLEBACKWARDCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0xB9AF780)
#define VLB_VOLUMETRICLIGHTBEAM_ISCOLLIDERHIDDENBYDYNAMICOCCLUDER_OFFSET UNITYSDK_OFFSET(0xB9AEDF0)
#define VLB_VOLUMETRICLIGHTBEAM_ISNEEDTICK_OFFSET UNITYSDK_OFFSET(0xB9B0360)
#define VLB_VOLUMETRICLIGHTBEAM_SETCLIPPINGPLANEOFF_OFFSET UNITYSDK_OFFSET(0xB9AED90)
#define VLB_VOLUMETRICLIGHTBEAM_SETCLIPPINGPLANE_OFFSET UNITYSDK_OFFSET(0xB9AED20)
#define VLB_VOLUMETRICLIGHTBEAM_SETTSC_OFFSET UNITYSDK_OFFSET(0xB9AF120)
#define VLB_VOLUMETRICLIGHTBEAM_SET_GEOMSEGMENTS_OFFSET UNITYSDK_OFFSET(0xB9AE9C0)
#define VLB_VOLUMETRICLIGHTBEAM_SET_GEOMSIDES_OFFSET UNITYSDK_OFFSET(0xB9AE970)
#define VLB_VOLUMETRICLIGHTBEAM_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0xB9AE9E0)
#define VLB_VOLUMETRICLIGHTBEAM_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0xB9AEA30)
#define VLB_VOLUMETRICLIGHTBEAM_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB9AEAA0)
#define VLB_VOLUMETRICLIGHTBEAM_SET_TRACKCHANGESDURINGPLAYTIME_OFFSET UNITYSDK_OFFSET(0xB9AEAF0)
#define VLB_VOLUMETRICLIGHTBEAM_SET__INTERNAL_INSTANCEDMATERIALGROUPID_OFFSET UNITYSDK_OFFSET(0xB9AF110)
#define VLB_VOLUMETRICLIGHTBEAM_STARTPLAYTIMEUPDATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0xB9AEB90)
#define VLB_VOLUMETRICLIGHTBEAM_SYNCMATERIAL_OFFSET UNITYSDK_OFFSET(0xB9B0370)
#define VLB_VOLUMETRICLIGHTBEAM_UPDATEAFTERMANUALPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xB9AF8C0)
#define VLB_VOLUMETRICLIGHTBEAM_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xB9B0820)
#define VLB_VOLUMETRICLIGHTBEAM_VALIDATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB9AF820)
#define VLB_VOLUMETRICLIGHTBEAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B0A00)
#define VLB_VOLUMETRICLIGHTBEAM__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB9B06C0)
#define VLB_VOLUMETRICLIGHTBEAM__ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB9B0590)
#define VLB_VOLUMETRICLIGHTBEAM__ONENABLE_OFFSET UNITYSDK_OFFSET(0xB9B03C0)
#define VLB_VOLUMETRICLIGHTBEAM__START_OFFSET UNITYSDK_OFFSET(0xB9AF980)
#define VLB_VOLUMETRICLIGHTBEAM__UPDATE_OFFSET UNITYSDK_OFFSET(0xB9AFE00)

namespace VLB
{
	inline static constexpr unsigned int VolumetricLightBeam_TypeDefinitionIndex = 45629;

	class VolumetricLightBeam : public ::ScenenLightManager::SceneManagedLightTAMonoPluginBase_1<::Class_4_0200DDD1DEC4CA99*>
	{
	public:
		::System::Boolean colorFromLight; // 0x30
		::VLB::ColorMode colorMode; // 0x34
		::System::Boolean SaveInPrefab; // 0x38
		::System::Int32 RenderQueue; // 0x3C
		::System::Boolean UseQualityFilter; // 0x40
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x44
		::System::Int32 LightQualityVersion; // 0x48
		::UnityEngine::Color color; // 0x4C
		::UnityEngine::Gradient* colorGradient; // 0x60
		::System::Single alphaInside; // 0x68
		::System::Single alphaOutside; // 0x6C
		::VLB::BlendingMode blendingMode; // 0x70
		::System::Boolean spotAngleFromLight; // 0x74
		::System::Single spotAngle; // 0x78
		::System::Single coneRadiusStart; // 0x7C
		::VLB::MeshType geomMeshType; // 0x80
		::System::Int32 geomCustomSides; // 0x84
		::System::Int32 geomCustomSegments; // 0x88
		::System::Boolean geomCap; // 0x8C
		::System::Single FadeInRange; // 0x90
		::System::Boolean skew; // 0x94
		::UnityEngine::Transform* skewTarget; // 0x98
		::UnityEngine::Vector3 preSkewPos; // 0xA0
		::System::Boolean fadeEndFromLight; // 0xAC
		::VLB::AttenuationEquation attenuationEquation; // 0xB0
		::System::Single attenuationCustomBlending; // 0xB4
		::System::Single fadeStart; // 0xB8
		::System::Single fadeEnd; // 0xBC
		::System::Single depthBlendDistance; // 0xC0
		::System::Single cameraClippingDistance; // 0xC4
		::System::Single FadePointFar; // 0xC8
		::System::Single FarIntensity; // 0xCC
		::System::Single glareFrontal; // 0xD0
		::System::Single glareBehind; // 0xD4
		::System::Single boostDistanceInside; // 0xD8
		::System::Single fresnelPowInside; // 0xDC
		::System::Single fresnelPow; // 0xE0
		::System::Boolean noiseEnabled; // 0xE4
		::System::Single noiseIntensity; // 0xE8
		::System::Boolean noiseScaleUseGlobal; // 0xEC
		::System::Single noiseScaleLocal; // 0xF0
		::System::Boolean noiseVelocityUseGlobal; // 0xF4
		::UnityEngine::Vector3 noiseVelocityLocal; // 0xF8
		::System::Boolean cookieMapEnabled; // 0x104
		::UnityEngine::Texture2D* cookieMap; // 0x108
		::System::Boolean reverseFresnelEnabled; // 0x110
		::System::Single reverseFresnelPow; // 0x114
		::System::Single reverseFresnelWeightRange; // 0x118
		::System::Single reverseFresnelSoftRange; // 0x11C
		::System::Single FlareScale; // 0x120
		::System::Single FlareScaleRoughness; // 0x124
		::UnityEngine::Plane m_PlaneWS; // 0x128
		::System::Int32 pluginVersion; // 0x138
		::System::Boolean _TrackChangesDuringPlaytime; // 0x13C
		::System::Int32 _SortingLayerID; // 0x140
		::System::Int32 _SortingOrder; // 0x144
		::System::UInt32 __INTERNAL_InstancedMaterialGroupID_k__BackingField; // 0x148
		::VLB::BeamGeometry* m_BeamGeom; // 0x150
		::UnityEngine::Renderer* m_BeamRenderer; // 0x158
		::UnityEngine::MaterialPropertyBlock* m_BeamMPB; // 0x160
		::System::Boolean m_PlaytimeUpdate; // 0x168
		::UnityEngine::Light* _CachedLight; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM__CTOR_OFFSET))(this);
		}

		::System::Single get_coneAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_CONEANGLE_OFFSET))(this);
		}

		::System::Single get_coneRadiusEnd()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_CONERADIUSEND_OFFSET))(this);
		}

		::System::Single get_coneVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_CONEVOLUME_OFFSET))(this);
		}

		::System::Single get_coneApexOffsetZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_CONEAPEXOFFSETZ_OFFSET))(this);
		}

		::System::Int32 get_geomSides()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_GEOMSIDES_OFFSET))(this);
		}

		::System::Void set_geomSides(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SET_GEOMSIDES_OFFSET))(this, value);
		}

		::System::Int32 get_geomSegments()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_GEOMSEGMENTS_OFFSET))(this);
		}

		::System::Void set_geomSegments(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SET_GEOMSEGMENTS_OFFSET))(this, value);
		}

		::System::Single get_attenuationLerpLinearQuad()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_ATTENUATIONLERPLINEARQUAD_OFFSET))(this);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SET_SORTINGLAYERID_OFFSET))(this, value);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_SORTINGLAYERNAME_OFFSET))(this);
		}

		::System::Void set_sortingLayerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SET_SORTINGLAYERNAME_OFFSET))(this, value);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SET_SORTINGORDER_OFFSET))(this, value);
		}

		::System::Boolean get_trackChangesDuringPlaytime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_TRACKCHANGESDURINGPLAYTIME_OFFSET))(this);
		}

		::System::Void set_trackChangesDuringPlaytime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SET_TRACKCHANGESDURINGPLAYTIME_OFFSET))(this, value);
		}

		::System::Boolean get_isCurrentlyTrackingChanges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_ISCURRENTLYTRACKINGCHANGES_OFFSET))(this);
		}

		::System::Boolean get_hasGeometry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_HASGEOMETRY_OFFSET))(this);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void SetClippingPlane(::UnityEngine::Plane planeWS)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Plane))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SETCLIPPINGPLANE_OFFSET))(this, planeWS);
		}

		::System::Void SetClippingPlaneOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SETCLIPPINGPLANEOFF_OFFSET))(this);
		}

		::System::Boolean IsColliderHiddenByDynamicOccluder(::UnityEngine::Collider* collider)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_ISCOLLIDERHIDDENBYDYNAMICOCCLUDER_OFFSET))(this, collider);
		}

		::System::Int32 get_blendingModeAsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_BLENDINGMODEASINT_OFFSET))(this);
		}

		::System::UInt32 get__INTERNAL_InstancedMaterialGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET__INTERNAL_INSTANCEDMATERIALGROUPID_OFFSET))(this);
		}

		::System::Void set__INTERNAL_InstancedMaterialGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SET__INTERNAL_INSTANCEDMATERIALGROUPID_OFFSET))(this, value);
		}

		::System::Void SetTSC(::System::Boolean enable, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SETTSC_OFFSET))(this, enable, state);
		}

		::System::String* get_meshStats()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_MESHSTATS_OFFSET))(this);
		}

		::System::Int32 get_meshVerticesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_MESHVERTICESCOUNT_OFFSET))(this);
		}

		::System::Int32 get_meshTrianglesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_MESHTRIANGLESCOUNT_OFFSET))(this);
		}

		::UnityEngine::Light* get_lightSpotAttached()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GET_LIGHTSPOTATTACHED_OFFSET))(this);
		}

		::System::Single GetInsideBeamFactor(::UnityEngine::Vector3 posWS)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GETINSIDEBEAMFACTOR_OFFSET))(this, posWS);
		}

		::System::Single GetInsideBeamFactorFromObjectSpacePos(::UnityEngine::Vector3 posOS)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GETINSIDEBEAMFACTORFROMOBJECTSPACEPOS_OFFSET))(this, posOS);
		}

		::System::Void Generate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GENERATE_OFFSET))(this);
		}

		::System::Void GenerateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_GENERATEGEOMETRY_OFFSET))(this);
		}

		::System::Void UpdateAfterManualPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_UPDATEAFTERMANUALPROPERTYCHANGE_OFFSET))(this);
		}

		::System::Void _Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM__START_OFFSET))(this);
		}

		::System::Void _Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM__UPDATE_OFFSET))(this);
		}

		::System::Boolean IsNeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_ISNEEDTICK_OFFSET))(this);
		}

		::System::Void SyncMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_SYNCMATERIAL_OFFSET))(this);
		}

		::System::Void _OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM__ONENABLE_OFFSET))(this);
		}

		::System::Void _OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM__ONDISABLE_OFFSET))(this);
		}

		::System::Void StartPlaytimeUpdateIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_STARTPLAYTIMEUPDATEIFNEEDED_OFFSET))(this);
		}

		::System::Void DoPlaytimeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_DOPLAYTIMEUPDATE_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM__ONDESTROY_OFFSET))(this);
		}

		::System::Void DestroyBeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_DESTROYBEAM_OFFSET))(this);
		}

		::System::Void AssignPropertiesFromSpotLight(::UnityEngine::Light* lightSpot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_ASSIGNPROPERTIESFROMSPOTLIGHT_OFFSET))(this, lightSpot);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void ClampProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_CLAMPPROPERTIES_OFFSET))(this);
		}

		::System::Void ValidateProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_VALIDATEPROPERTIES_OFFSET))(this);
		}

		::System::Void HandleBackwardCompatibility(::System::Int32 serializedVersion, ::System::Int32 newVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_VOLUMETRICLIGHTBEAM_HANDLEBACKWARDCOMPATIBILITY_OFFSET))(this, serializedVersion, newVersion);
		}
	};
}
