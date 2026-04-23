#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/HideFlags.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/MeshArrays.h"
#include "unitysdk/UnityEngine/ProBuilder/MeshSyncState.h"
#include "unitysdk/UnityEngine/ProBuilder/ProBuilderMesh_CacheValidState.h"
#include "unitysdk/UnityEngine/ProBuilder/RefreshMask.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class SharedVertex; }
namespace UnityEngine::ProBuilder { class UnwrapParameters; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDSHAREDVERTEX_OFFSET UNITYSDK_OFFSET(0x1A2B5400)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOFACESELECTION_OFFSET UNITYSDK_OFFSET(0x1A2B6210)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOSHAREDVERTEX_OFFSET UNITYSDK_OFFSET(0x1A2B5320)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTHASBEENRESET_OFFSET UNITYSDK_OFFSET(0x1A2AD770)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1A2AD5B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_ELEMENTSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2AD930)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_MESHWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1A2AD3F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A2ADCE0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CACHESELECTION_OFFSET UNITYSDK_OFFSET(0x1A2B5530)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEARSELECTION_OFFSET UNITYSDK_OFFSET(0x1A2AE040)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A2AE350)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1A2B0E60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATEINSTANCEWITHPOINTS_OFFSET UNITYSDK_OFFSET(0x1A2AE480)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A2AE9D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1A2AEB40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_OFFSET UNITYSDK_OFFSET(0x1A2AE950)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHCOLLIDERISASSIGNED_OFFSET UNITYSDK_OFFSET(0x1A2ADF20)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHFILTERISASSIGNED_OFFSET UNITYSDK_OFFSET(0x1A2ADE30)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GEOMETRYWITHPOINTS_OFFSET UNITYSDK_OFFSET(0x1A2AE610)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEEDGE_OFFSET UNITYSDK_OFFSET(0x1A2B6150)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEFACE_OFFSET UNITYSDK_OFFSET(0x1A2B60F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEVERTEX_OFFSET UNITYSDK_OFFSET(0x1A2B61D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1A2B3CC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_2_OFFSET UNITYSDK_OFFSET(0x1A2B4400)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_3_OFFSET UNITYSDK_OFFSET(0x1A2B35E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_4_OFFSET UNITYSDK_OFFSET(0x1A2B4DA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2B3520)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOLORS_OFFSET UNITYSDK_OFFSET(0x1A2ACC20)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETNORMALS_OFFSET UNITYSDK_OFFSET(0x1A2A6B70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSELECTEDFACES_OFFSET UNITYSDK_OFFSET(0x1A2B5DA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLES_OFFSET UNITYSDK_OFFSET(0x1A2B3200)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLE_OFFSET UNITYSDK_OFFSET(0x1A2B3060)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETTANGENTS_OFFSET UNITYSDK_OFFSET(0x1A2A6C50)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUNUSEDTEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x1A2B2010)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_1_OFFSET UNITYSDK_OFFSET(0x1A2ACF40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_OFFSET UNITYSDK_OFFSET(0x1A29B7B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICESINLIST_OFFSET UNITYSDK_OFFSET(0x1A2ABFD0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1A23C580)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACB90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1A2ACBB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_EDGECOUNT_OFFSET UNITYSDK_OFFSET(0x1A254450)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACECOUNT_OFFSET UNITYSDK_OFFSET(0x1A2517E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2AB930)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACES_OFFSET UNITYSDK_OFFSET(0x1A2AB950)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1A2AB810)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A2A6D40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A2AD180)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHFORMATVERSION_OFFSET UNITYSDK_OFFSET(0x1A2ADCD0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHSYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1A2ADB00)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1A2925A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACB70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1A2888D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ABF50)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1A2ABF70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_PRESERVEMESHASSETONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2AB910)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1A26B3F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0x1A2B5490)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A2B5C90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2B5CD0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGECOUNT_OFFSET UNITYSDK_OFFSET(0x1A2B54F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B60B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGES_OFFSET UNITYSDK_OFFSET(0x1A2B5FA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACECOUNT_OFFSET UNITYSDK_OFFSET(0x1A2B54B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDEXES_OFFSET UNITYSDK_OFFSET(0x1A2B5EE0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B6090)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B6000)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDINDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B60D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICESCOUNT_OFFSET UNITYSDK_OFFSET(0x1A2B5510)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2B5CB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A2B54D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2B5F40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURELOOKUP_OFFSET UNITYSDK_OFFSET(0x1A23CEC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURES_OFFSET UNITYSDK_OFFSET(0x1A2ABF40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTEXLOOKUP_OFFSET UNITYSDK_OFFSET(0x1A238120)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ABF30)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A26B390)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACE60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1A2ACD40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES2INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACEA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES3INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACEC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACE80)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES_OFFSET UNITYSDK_OFFSET(0x1A2ACEE0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1A2AD2B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_UNWRAPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A2AB7F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_USERCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1A2AB7D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERSIONINDEX_OFFSET UNITYSDK_OFFSET(0x1A2AB900)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A24E6E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_HASARRAYS_OFFSET UNITYSDK_OFFSET(0x1A241E00)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INCREMENTVERSIONINDEX_OFFSET UNITYSDK_OFFSET(0x1A2AE340)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATECACHES_OFFSET UNITYSDK_OFFSET(0x1A259DA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATEFACES_OFFSET UNITYSDK_OFFSET(0x1A2ABBB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDTEXTURELOOKUP_OFFSET UNITYSDK_OFFSET(0x1A2ABAB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDVERTEXLOOKUP_OFFSET UNITYSDK_OFFSET(0x1A2AB9B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ISVALIDTEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x1A2B2100)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_MAKEUNIQUE_OFFSET UNITYSDK_OFFSET(0x1A2B0E10)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2AE230)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILDWITHPOSITIONSANDFACES_OFFSET UNITYSDK_OFFSET(0x1A2AEA70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A2AE0E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHCOLORS_OFFSET UNITYSDK_OFFSET(0x1A2B1B10)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHNORMALS_OFFSET UNITYSDK_OFFSET(0x1A2B1C90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHTANGENTS_OFFSET UNITYSDK_OFFSET(0x1A2B1E50)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHUV_OFFSET UNITYSDK_OFFSET(0x1A2B13A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A2AF290)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVEFROMFACESELECTIONATINDEX_OFFSET UNITYSDK_OFFSET(0x1A2B67E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTHASBEENRESET_OFFSET UNITYSDK_OFFSET(0x1A2AD850)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1A2AD690)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_ELEMENTSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2ADA10)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_MESHWILLBEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1A2AD4D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_RESET_OFFSET UNITYSDK_OFFSET(0x1A2AE140)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETFACECOLOR_OFFSET UNITYSDK_OFFSET(0x1A2B2620)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETGROUPUV_OFFSET UNITYSDK_OFFSET(0x1A2B2530)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A2B2A60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDEDGES_OFFSET UNITYSDK_OFFSET(0x1A2B64E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_1_OFFSET UNITYSDK_OFFSET(0x1A2B6250)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_OFFSET UNITYSDK_OFFSET(0x1A2B6450)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2B6630)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDTEXTURES_OFFSET UNITYSDK_OFFSET(0x1A23E210)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A23E0A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETTEXTURESCOINCIDENT_OFFSET UNITYSDK_OFFSET(0x1A2B52E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETUVS_OFFSET UNITYSDK_OFFSET(0x1A29BB70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICESCOINCIDENT_OFFSET UNITYSDK_OFFSET(0x1A2B4F50)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x1A23D500)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACBA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORS_OFFSET UNITYSDK_OFFSET(0x1A2560D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2AB940)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACES_OFFSET UNITYSDK_OFFSET(0x1A23DFC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1A2ADAF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_NORMALSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACB80)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ABF60)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1A256050)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_PRESERVEMESHASSETONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2AB920)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0x1A2B54A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDEDGESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B60C0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACEINDICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B60A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B6010)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDINDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2B60E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDTEXTURES_OFFSET UNITYSDK_OFFSET(0x1A2696F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A259CA0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2697F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACE70)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1A2ACDC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES2INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACEB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES3INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACED0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A2ACE90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES_OFFSET UNITYSDK_OFFSET(0x1A256180)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_UNWRAPPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A2AB800)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_USERCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1A2AB7E0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_TOMESH_OFFSET UNITYSDK_OFFSET(0x1A2AED90)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH_UNUSEDELEMENTGROUP_OFFSET UNITYSDK_OFFSET(0x1A2B2110)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2B6900)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B6810)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__236_0_OFFSET UNITYSDK_OFFSET(0x1A2B69A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_0_OFFSET UNITYSDK_OFFSET(0x1A2B69F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_1_OFFSET UNITYSDK_OFFSET(0x1A2B6A40)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH__SET_SELECTEDFACESINTERNAL_B__222_0_OFFSET UNITYSDK_OFFSET(0x1A2B6950)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh_TypeDefinitionIndex = 39959;

	class ProBuilderMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_meshWillBeDestroyed()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh_TypeDefinitionIndex)->GetStaticField(0x28FB0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_CachedHashSet()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh_TypeDefinitionIndex)->GetStaticField(0x28FB8);
		}
		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_componentWillBeDestroyed()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh_TypeDefinitionIndex)->GetStaticField(0x28FC0);
		}
		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_componentHasBeenReset()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh_TypeDefinitionIndex)->GetStaticField(0x28FC8);
		}
		static ::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>** StaticGet_elementSelectionChanged()
		{
			return (::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh_TypeDefinitionIndex)->GetStaticField(0x28FD0);
		}
		// static const ::UnityEngine::HideFlags k_MeshFilterHideFlags; // 0x0
		// static const ::System::Int32 k_UVChannelCount = 0x4; // 0x0
		// static const ::System::Int32 k_MeshFormatVersion = 0x2; // 0x0
		// static const ::System::Int32 k_MeshFormatVersionSubmeshMaterialRefactor = 0x1; // 0x0
		// static const ::System::Int32 k_MeshFormatVersionAutoUVScaleOffset = 0x2; // 0x0
		// static const ::System::UInt32 maxVertexCount = 0xFFFF; // 0x0
		::System::Int32 m_MeshFormatVersion; // 0x18
		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* m_Faces; // 0x20
		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* m_SharedVertices; // 0x28
		::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState m_CacheValid; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_SharedVertexLookup; // 0x38
		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* m_SharedTextures; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_SharedTextureLookup; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* m_Positions; // 0x50
		::Il2CppArray<::UnityEngine::Vector2>* m_Textures0; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures2; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_Textures3; // 0x68
		::Il2CppArray<::UnityEngine::Vector4>* m_Tangents; // 0x70
		::Il2CppArray<::UnityEngine::Vector3>* m_Normals; // 0x78
		::Il2CppArray<::UnityEngine::Color>* m_Colors; // 0x80
		::System::Boolean _userCollisions_k__BackingField; // 0x88
		::UnityEngine::ProBuilder::UnwrapParameters* m_UnwrapParameters; // 0x90
		::System::Boolean m_PreserveMeshAssetOnDestroy; // 0x98
		::System::String* assetGuid; // 0xA0
		::UnityEngine::Mesh* m_Mesh; // 0xA8
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0xB0
		::UnityEngine::MeshFilter* m_MeshFilter; // 0xB8
		::System::UInt16 m_VersionIndex; // 0xC0
		::System::Boolean m_IsSelectable; // 0xC2
		::Il2CppArray<::System::Int32>* m_SelectedFaces; // 0xC8
		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* m_SelectedEdges; // 0xD0
		::Il2CppArray<::System::Int32>* m_SelectedVertices; // 0xD8
		::System::Boolean m_SelectedCacheDirty; // 0xE0
		::System::Int32 m_SelectedSharedVerticesCount; // 0xE4
		::System::Int32 m_SelectedCoincidentVertexCount; // 0xE8
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_SelectedSharedVertices; // 0xF0
		::System::Collections::Generic::List_1<::System::Int32>* m_SelectedCoincidentVertices; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__CCTOR_OFFSET))();
		}

		::System::Boolean get_userCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_USERCOLLISIONS_OFFSET))(this);
		}

		::System::Void set_userCollisions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_USERCOLLISIONS_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::UnwrapParameters* get_unwrapParameters()
		{
			return ((::UnityEngine::ProBuilder::UnwrapParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_UNWRAPPARAMETERS_OFFSET))(this);
		}

		::System::Void set_unwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::UnwrapParameters*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_UNWRAPPARAMETERS_OFFSET))(this, value);
		}

		::UnityEngine::MeshRenderer* get_renderer()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_RENDERER_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_filter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FILTER_OFFSET))(this);
		}

		::System::UInt16 get_versionIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERSIONINDEX_OFFSET))(this);
		}

		::System::Boolean get_preserveMeshAssetOnDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_PRESERVEMESHASSETONDESTROY_OFFSET))(this);
		}

		::System::Void set_preserveMeshAssetOnDestroy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_PRESERVEMESHASSETONDESTROY_OFFSET))(this, value);
		}

		::System::Boolean HasArrays(::UnityEngine::ProBuilder::MeshArrays channels)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_HASARRAYS_OFFSET))(this, channels);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* get_facesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACESINTERNAL_OFFSET))(this);
		}

		::System::Void set_facesInternal(::Il2CppArray<::UnityEngine::ProBuilder::Face*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACESINTERNAL_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* get_faces()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACES_OFFSET))(this);
		}

		::System::Void set_faces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_FACES_OFFSET))(this, value);
		}

		::System::Void InvalidateSharedVertexLookup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDVERTEXLOOKUP_OFFSET))(this);
		}

		::System::Void InvalidateSharedTextureLookup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATESHAREDTEXTURELOOKUP_OFFSET))(this);
		}

		::System::Void InvalidateFaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATEFACES_OFFSET))(this);
		}

		::System::Void InvalidateCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INVALIDATECACHES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedVerticesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICESINTERNAL_OFFSET))(this);
		}

		::System::Void set_sharedVerticesInternal(::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICESINTERNAL_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedVertices()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTICES_OFFSET))(this);
		}

		::System::Void set_sharedVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDVERTICES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* get_sharedVertexLookup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDVERTEXLOOKUP_OFFSET))(this);
		}

		::System::Void SetSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* indexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDVERTICES_OFFSET))(this, indexes);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* get_sharedTextures()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURES_OFFSET))(this);
		}

		::System::Void set_sharedTextures(::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SHAREDTEXTURES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* get_sharedTextureLookup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SHAREDTEXTURELOOKUP_OFFSET))(this);
		}

		::System::Void SetSharedTextures(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* indexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSHAREDTEXTURES_OFFSET))(this, indexes);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_positionsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONSINTERNAL_OFFSET))(this);
		}

		::System::Void set_positionsInternal(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONSINTERNAL_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_positions()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void set_positions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_POSITIONS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* GetVertices(::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICES_OFFSET))(this, indexes);
		}

		::System::Void GetVerticesInList(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETVERTICESINLIST_OFFSET))(this, vertices);
		}

		::System::Void SetVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Boolean applyMesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICES_OFFSET))(this, vertices, applyMesh);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* get_normals()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_normalsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_NORMALSINTERNAL_OFFSET))(this);
		}

		::System::Void set_normalsInternal(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_NORMALSINTERNAL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetNormals()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETNORMALS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* get_colorsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORSINTERNAL_OFFSET))(this);
		}

		::System::Void set_colorsInternal(::Il2CppArray<::UnityEngine::Color>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORSINTERNAL_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Color>* get_colors()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_COLORS_OFFSET))(this);
		}

		::System::Void set_colors(::System::Collections::Generic::IList_1<::UnityEngine::Color>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_COLORS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Color>* GetColors()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOLORS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* get_tangents()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTS_OFFSET))(this);
		}

		::System::Void set_tangents(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_tangentsInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TANGENTSINTERNAL_OFFSET))(this);
		}

		::System::Void set_tangentsInternal(::Il2CppArray<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TANGENTSINTERNAL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetTangents()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETTANGENTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_texturesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURESINTERNAL_OFFSET))(this);
		}

		::System::Void set_texturesInternal(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURESINTERNAL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures2Internal()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES2INTERNAL_OFFSET))(this);
		}

		::System::Void set_textures2Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES2INTERNAL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_textures3Internal()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES3INTERNAL_OFFSET))(this);
		}

		::System::Void set_textures3Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES3INTERNAL_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* get_textures()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TEXTURES_OFFSET))(this);
		}

		::System::Void set_textures(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_TEXTURES_OFFSET))(this, value);
		}

		::System::Void GetUVs(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_OFFSET))(this, channel, uvs);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* GetUVs_1(::System::Int32 channel)
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUVS_1_OFFSET))(this, channel);
		}

		::System::Void SetUVs(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETUVS_OFFSET))(this, channel, uvs);
		}

		::System::Int32 get_faceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_FACECOUNT_OFFSET))(this);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_edgeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_EDGECOUNT_OFFSET))(this);
		}

		::System::Int32 get_indexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_INDEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_triangleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_TRIANGLECOUNT_OFFSET))(this);
		}

		static ::System::Void add_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_MESHWILLBEDESTROYED_OFFSET))(value);
		}

		static ::System::Void remove_meshWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_MESHWILLBEDESTROYED_OFFSET))(value);
		}

		static ::System::Void add_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTWILLBEDESTROYED_OFFSET))(value);
		}

		static ::System::Void remove_componentWillBeDestroyed(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTWILLBEDESTROYED_OFFSET))(value);
		}

		static ::System::Void add_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_COMPONENTHASBEENRESET_OFFSET))(value);
		}

		static ::System::Void remove_componentHasBeenReset(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_COMPONENTHASBEENRESET_OFFSET))(value);
		}

		static ::System::Void add_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADD_ELEMENTSELECTIONCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_elementSelectionChanged(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVE_ELEMENTSELECTIONCHANGED_OFFSET))(value);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_MESH_OFFSET))(this, value);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_ID_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::MeshSyncState get_meshSyncState()
		{
			return ((::UnityEngine::ProBuilder::MeshSyncState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHSYNCSTATE_OFFSET))(this);
		}

		::System::Int32 get_meshFormatVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_MESHFORMATVERSION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ONDESTROY_OFFSET))(this);
		}

		::System::Void IncrementVersionIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_INCREMENTVERSIONINDEX_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEAR_OFFSET))(this);
		}

		::System::Void EnsureMeshFilterIsAssigned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHFILTERISASSIGNED_OFFSET))(this);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateInstanceWithPoints(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATEINSTANCEWITHPOINTS_OFFSET))(positions);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Create()
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_OFFSET))();
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Create_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_1_OFFSET))(positions, faces);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* Create_2(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>* materials)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CREATE_2_OFFSET))(vertices, faces, sharedVertices, sharedTextures, materials);
		}

		::System::Void GeometryWithPoints(::Il2CppArray<::UnityEngine::Vector3>* points)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GEOMETRYWITHPOINTS_OFFSET))(this, points);
		}

		::System::Void RebuildWithPositionsAndFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILDWITHPOSITIONSANDFACES_OFFSET))(this, vertices, faces);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REBUILD_OFFSET))(this);
		}

		::System::Void ToMesh(::UnityEngine::MeshTopology preferredTopology)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_TOMESH_OFFSET))(this, preferredTopology);
		}

		::System::Void MakeUnique()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_MAKEUNIQUE_OFFSET))(this);
		}

		::System::Void CopyFrom(::UnityEngine::ProBuilder::ProBuilderMesh* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_COPYFROM_OFFSET))(this, other);
		}

		::System::Void Refresh(::UnityEngine::ProBuilder::RefreshMask mask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::RefreshMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESH_OFFSET))(this, mask);
		}

		::System::Void EnsureMeshColliderIsAssigned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ENSUREMESHCOLLIDERISASSIGNED_OFFSET))(this);
		}

		::System::Int32 GetUnusedTextureGroup(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETUNUSEDTEXTUREGROUP_OFFSET))(this, i);
		}

		static ::System::Boolean IsValidTextureGroup(::System::Int32 group)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ISVALIDTEXTUREGROUP_OFFSET))(group);
		}

		::System::Int32 UnusedElementGroup(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_UNUSEDELEMENTGROUP_OFFSET))(this, i);
		}

		::System::Void RefreshUV(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHUV_OFFSET))(this, facesToRefresh);
		}

		::System::Void SetGroupUV(::UnityEngine::ProBuilder::AutoUnwrapSettings settings, ::System::Int32 group)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::AutoUnwrapSettings, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETGROUPUV_OFFSET))(this, settings, group);
		}

		::System::Void RefreshColors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHCOLORS_OFFSET))(this);
		}

		::System::Void SetFaceColor(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETFACECOLOR_OFFSET))(this, face, color);
		}

		::System::Void SetMaterial(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETMATERIAL_OFFSET))(this, faces, material);
		}

		::System::Void RefreshNormals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHNORMALS_OFFSET))(this);
		}

		::System::Void RefreshTangents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REFRESHTANGENTS_OFFSET))(this);
		}

		::System::Int32 GetSharedVertexHandle(::System::Int32 vertex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLE_OFFSET))(this, vertex);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* GetSharedVertexHandles(::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSHAREDVERTEXHANDLES_OFFSET))(this, vertices);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_OFFSET))(this, vertices);
		}

		::System::Void GetCoincidentVertices_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<::System::Int32>* coincident)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_1_OFFSET))(this, faces, coincident);
		}

		::System::Void GetCoincidentVertices_2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::List_1<::System::Int32>* coincident)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_2_OFFSET))(this, edges, coincident);
		}

		::System::Void GetCoincidentVertices_3(::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices, ::System::Collections::Generic::List_1<::System::Int32>* coincident)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_3_OFFSET))(this, vertices, coincident);
		}

		::System::Void GetCoincidentVertices_4(::System::Int32 vertex, ::System::Collections::Generic::List_1<::System::Int32>* coincident)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETCOINCIDENTVERTICES_4_OFFSET))(this, vertex, coincident);
		}

		::System::Void SetVerticesCoincident(::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETVERTICESCOINCIDENT_OFFSET))(this, vertices);
		}

		::System::Void SetTexturesCoincident(::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETTEXTURESCOINCIDENT_OFFSET))(this, vertices);
		}

		::System::Void AddToSharedVertex(::System::Int32 sharedVertexHandle, ::System::Int32 vertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOSHAREDVERTEX_OFFSET))(this, sharedVertexHandle, vertex);
		}

		::System::Void AddSharedVertex(::UnityEngine::ProBuilder::SharedVertex* vertex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::SharedVertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDSHAREDVERTEX_OFFSET))(this, vertex);
		}

		::System::Boolean get_selectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTABLE_OFFSET))(this);
		}

		::System::Void set_selectable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTABLE_OFFSET))(this, value);
		}

		::System::Int32 get_selectedFaceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACECOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedEdgeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGECOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedSharedVerticesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICESCOUNT_OFFSET))(this);
		}

		::System::Int32 get_selectedCoincidentVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTEXCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_selectedSharedVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDSHAREDVERTICES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_selectedCoincidentVertices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDCOINCIDENTVERTICES_OFFSET))(this);
		}

		::System::Void CacheSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CACHESELECTION_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* GetSelectedFaces()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETSELECTEDFACES_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_selectedFaceIndexes()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDEXES_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_selectedVertices()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDVERTICES_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_selectedEdges()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Face*>* get_selectedFacesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedFacesInternal(::Il2CppArray<::UnityEngine::ProBuilder::Face*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACESINTERNAL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_selectedFaceIndicesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDFACEINDICESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedFaceIndicesInternal(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDFACEINDICESINTERNAL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* get_selectedEdgesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDEDGESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedEdgesInternal(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDEDGESINTERNAL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_selectedIndexesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GET_SELECTEDINDEXESINTERNAL_OFFSET))(this);
		}

		::System::Void set_selectedIndexesInternal(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SET_SELECTEDINDEXESINTERNAL_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::Face* GetActiveFace()
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEFACE_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Edge GetActiveEdge()
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEEDGE_OFFSET))(this);
		}

		::System::Int32 GetActiveVertex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_GETACTIVEVERTEX_OFFSET))(this);
		}

		::System::Void AddToFaceSelection(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_ADDTOFACESELECTION_OFFSET))(this, index);
		}

		::System::Void SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_OFFSET))(this, selected);
		}

		::System::Void SetSelectedFaces_1(::System::Collections::Generic::IEnumerable_1<::System::Int32>* selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDFACES_1_OFFSET))(this, selected);
		}

		::System::Void SetSelectedEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDEDGES_OFFSET))(this, edges);
		}

		::System::Void SetSelectedVertices(::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_SETSELECTEDVERTICES_OFFSET))(this, vertices);
		}

		::System::Void RemoveFromFaceSelectionAtIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_REMOVEFROMFACESELECTIONATINDEX_OFFSET))(this, index);
		}

		::System::Void ClearSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH_CLEARSELECTION_OFFSET))(this);
		}

		::System::Int32 _set_selectedFacesInternal_b__222_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SET_SELECTEDFACESINTERNAL_B__222_0_OFFSET))(this, x);
		}

		::System::Int32 _SetSelectedFaces_b__236_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__236_0_OFFSET))(this, x);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _SetSelectedFaces_b__237_0(::System::Int32 x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_0_OFFSET))(this, x);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _SetSelectedFaces_b__237_1(::System::Int32 x)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH__SETSELECTEDFACES_B__237_1_OFFSET))(this, x);
		}
	};
}
