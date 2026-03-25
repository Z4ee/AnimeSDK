#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_PROBUILDER_FACE_CACHEDISTINCTINDEXES_OFFSET UNITYSDK_OFFSET(0x187FF6F0)
#define UNITYENGINE_PROBUILDER_FACE_CACHEEDGES_OFFSET UNITYSDK_OFFSET(0x187FF990)
#define UNITYENGINE_PROBUILDER_FACE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x188000B0)
#define UNITYENGINE_PROBUILDER_FACE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x187FFFA0)
#define UNITYENGINE_PROBUILDER_FACE_GETDISTINCTINDICES_OFFSET UNITYSDK_OFFSET(0x18801400)
#define UNITYENGINE_PROBUILDER_FACE_GETINDICES_OFFSET UNITYSDK_OFFSET(0x18800EF0)
#define UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x187FEC20)
#define UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXES_OFFSET UNITYSDK_OFFSET(0x187FF890)
#define UNITYENGINE_PROBUILDER_FACE_GET_EDGESINTERNAL_OFFSET UNITYSDK_OFFSET(0x187FF3D0)
#define UNITYENGINE_PROBUILDER_FACE_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x187FFBE0)
#define UNITYENGINE_PROBUILDER_FACE_GET_INDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x187FF500)
#define UNITYENGINE_PROBUILDER_FACE_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x187FF5E0)
#define UNITYENGINE_PROBUILDER_FACE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x187FFD00)
#define UNITYENGINE_PROBUILDER_FACE_GET_MANUALUV_OFFSET UNITYSDK_OFFSET(0x187FF4C0)
#define UNITYENGINE_PROBUILDER_FACE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x187FFC90)
#define UNITYENGINE_PROBUILDER_FACE_GET_SMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x187FFC70)
#define UNITYENGINE_PROBUILDER_FACE_GET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x187FFCB0)
#define UNITYENGINE_PROBUILDER_FACE_GET_TEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x187FF4E0)
#define UNITYENGINE_PROBUILDER_FACE_GET_UV_OFFSET UNITYSDK_OFFSET(0x187FFCD0)
#define UNITYENGINE_PROBUILDER_FACE_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x187FF5D0)
#define UNITYENGINE_PROBUILDER_FACE_ISQUAD_OFFSET UNITYSDK_OFFSET(0x18800160)
#define UNITYENGINE_PROBUILDER_FACE_REVERSE_OFFSET UNITYSDK_OFFSET(0x18800ED0)
#define UNITYENGINE_PROBUILDER_FACE_SETINDEXES_OFFSET UNITYSDK_OFFSET(0x187FF620)
#define UNITYENGINE_PROBUILDER_FACE_SET_INDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x187FF510)
#define UNITYENGINE_PROBUILDER_FACE_SET_MANUALUV_OFFSET UNITYSDK_OFFSET(0x187FF4D0)
#define UNITYENGINE_PROBUILDER_FACE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x187FFCA0)
#define UNITYENGINE_PROBUILDER_FACE_SET_SMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x187FFC80)
#define UNITYENGINE_PROBUILDER_FACE_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x187FFCC0)
#define UNITYENGINE_PROBUILDER_FACE_SET_TEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x187FF4F0)
#define UNITYENGINE_PROBUILDER_FACE_SET_UV_OFFSET UNITYSDK_OFFSET(0x187FFCF0)
#define UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXESTOZERO_OFFSET UNITYSDK_OFFSET(0x18800C60)
#define UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXES_OFFSET UNITYSDK_OFFSET(0x188009D0)
#define UNITYENGINE_PROBUILDER_FACE_SMALLESTINDEXVALUE_OFFSET UNITYSDK_OFFSET(0x18800A80)
#define UNITYENGINE_PROBUILDER_FACE_TOQUAD_OFFSET UNITYSDK_OFFSET(0x188001B0)
#define UNITYENGINE_PROBUILDER_FACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188007C0)
#define UNITYENGINE_PROBUILDER_FACE_TRYGETNEXTEDGE_OFFSET UNITYSDK_OFFSET(0x18801F90)
#define UNITYENGINE_PROBUILDER_FACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187FFD50)
#define UNITYENGINE_PROBUILDER_FACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x187FFE50)
#define UNITYENGINE_PROBUILDER_FACE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x187FFEF0)
#define UNITYENGINE_PROBUILDER_FACE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x187FFF90)
#define UNITYENGINE_PROBUILDER_FACE__CTOR_OFFSET UNITYSDK_OFFSET(0x187FFD40)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Face_TypeDefinitionIndex = 34094;

	class Face : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_Indexes; // 0x10
		::System::Int32 m_SmoothingGroup; // 0x18
		::UnityEngine::ProBuilder::AutoUnwrapSettings m_Uv; // 0x1C
		::UnityEngine::Material* m_Material; // 0x40
		::System::Int32 m_SubmeshIndex; // 0x48
		::System::Boolean m_ManualUV; // 0x4C
		::System::Int32 elementGroup; // 0x50
		::System::Int32 m_TextureGroup; // 0x54
		::Il2CppArray<::System::Int32>* m_DistinctIndexes; // 0x58
		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* m_Edges; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE__CTOR_1_OFFSET))(this, indices);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Int32>* triangles, ::UnityEngine::Material* m, ::UnityEngine::ProBuilder::AutoUnwrapSettings u, ::System::Int32 smoothing, ::System::Int32 texture, ::System::Int32 element, ::System::Boolean manualUVs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Material*, ::UnityEngine::ProBuilder::AutoUnwrapSettings, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE__CTOR_2_OFFSET))(this, triangles, m, u, smoothing, texture, element, manualUVs);
		}

		::System::Void _ctor_3(::System::Collections::Generic::IEnumerable_1<::System::Int32>* triangles, ::System::Int32 submeshIndex, ::UnityEngine::ProBuilder::AutoUnwrapSettings u, ::System::Int32 smoothing, ::System::Int32 texture, ::System::Int32 element, ::System::Boolean manualUVs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Int32, ::UnityEngine::ProBuilder::AutoUnwrapSettings, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE__CTOR_3_OFFSET))(this, triangles, submeshIndex, u, smoothing, texture, element, manualUVs);
		}

		::System::Void _ctor_4(::UnityEngine::ProBuilder::Face* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE__CTOR_4_OFFSET))(this, other);
		}

		::System::Boolean get_manualUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_MANUALUV_OFFSET))(this);
		}

		::System::Void set_manualUV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_MANUALUV_OFFSET))(this, value);
		}

		::System::Int32 get_textureGroup()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_TEXTUREGROUP_OFFSET))(this);
		}

		::System::Void set_textureGroup(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_TEXTUREGROUP_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_indexesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_INDEXESINTERNAL_OFFSET))(this);
		}

		::System::Void set_indexesInternal(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_INDEXESINTERNAL_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_indexes()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_INDEXES_OFFSET))(this);
		}

		::System::Void SetIndexes(::System::Collections::Generic::IEnumerable_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SETINDEXES_OFFSET))(this, indices);
		}

		::Il2CppArray<::System::Int32>* get_distinctIndexesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXESINTERNAL_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_distinctIndexes()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* get_edgesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_EDGESINTERNAL_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_edges()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_EDGES_OFFSET))(this);
		}

		::System::Int32 get_smoothingGroup()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_SMOOTHINGGROUP_OFFSET))(this);
		}

		::System::Void set_smoothingGroup(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_SMOOTHINGGROUP_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_MATERIAL_OFFSET))(this, value);
		}

		::System::Int32 get_submeshIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_SUBMESHINDEX_OFFSET))(this);
		}

		::System::Void set_submeshIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_SUBMESHINDEX_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::AutoUnwrapSettings get_uv()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_UV_OFFSET))(this);
		}

		::System::Void set_uv(::UnityEngine::ProBuilder::AutoUnwrapSettings value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_UV_OFFSET))(this, value);
		}

		::System::Int32 get_Item(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void CopyFrom(::UnityEngine::ProBuilder::Face* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_COPYFROM_OFFSET))(this, other);
		}

		::System::Void InvalidateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_INVALIDATECACHE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* CacheEdges()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CACHEEDGES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* CacheDistinctIndexes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CACHEDISTINCTINDEXES_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Int32 a, ::System::Int32 b, ::System::Int32 c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CONTAINS_OFFSET))(this, a, b, c);
		}

		::System::Boolean IsQuad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_ISQUAD_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* ToQuad()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_TOQUAD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_TOSTRING_OFFSET))(this);
		}

		::System::Void ShiftIndexes(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXES_OFFSET))(this, offset);
		}

		::System::Int32 SmallestIndexValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SMALLESTINDEXVALUE_OFFSET))(this);
		}

		::System::Void ShiftIndexesToZero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXESTOZERO_OFFSET))(this);
		}

		::System::Void Reverse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_REVERSE_OFFSET))(this);
		}

		static ::System::Void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GETINDICES_OFFSET))(faces, indices);
		}

		static ::System::Void GetDistinctIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::List_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GETDISTINCTINDICES_OFFSET))(faces, indices);
		}

		::System::Boolean TryGetNextEdge(::UnityEngine::ProBuilder::Edge source, ::System::Int32 index, ::UnityEngine::ProBuilder::Edge& nextEdge, ::System::Int32& nextIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge, ::System::Int32, ::UnityEngine::ProBuilder::Edge&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_TRYGETNEXTEDGE_OFFSET))(this, source, index, nextEdge, nextIndex);
		}
	};
}
