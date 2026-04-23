#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicPoints; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x1A1D2B70)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_BOUNDSEXTENTS_OFFSET UNITYSDK_OFFSET(0x1A1D2BA0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_IDSLIST_OFFSET UNITYSDK_OFFSET(0x1A1D2B00)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_IDS_OFFSET UNITYSDK_OFFSET(0x1A1D2B50)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_POINTSLIST_OFFSET UNITYSDK_OFFSET(0x1A1D2AE0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1A1D2B10)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_VELOCITIESLIST_OFFSET UNITYSDK_OFFSET(0x1A1D2AF0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_VELOCITIES_OFFSET UNITYSDK_OFFSET(0x1A1D2B30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1D2C60)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_RESET_OFFSET UNITYSDK_OFFSET(0x1A1D2BD0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_SET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x1A1D2B90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_SET_BOUNDSEXTENTS_OFFSET UNITYSDK_OFFSET(0x1A1D2BC0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D2DA0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicPointsCloud_TypeDefinitionIndex = 40875;

	class AlembicPointsCloud : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* m_points; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* m_velocities; // 0x20
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::UInt32>* m_ids; // 0x28
		::UnityEngine::Formats::Alembic::Importer::AlembicPoints* m_abc; // 0x30
		::System::Boolean m_sort; // 0x38
		::UnityEngine::Transform* m_sortFrom; // 0x40
		::UnityEngine::Vector3 _BoundsCenter_k__BackingField; // 0x48
		::UnityEngine::Vector3 _BoundsExtents_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* get_pointsList()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_POINTSLIST_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* get_velocitiesList()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_VELOCITIESLIST_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::UInt32>* get_idsList()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_IDSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_Positions()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_POSITIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_Velocities()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_VELOCITIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Ids()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_IDS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_BoundsCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_BOUNDSCENTER_OFFSET))(this);
		}

		::System::Void set_BoundsCenter(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_SET_BOUNDSCENTER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_BoundsExtents()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_GET_BOUNDSEXTENTS_OFFSET))(this);
		}

		::System::Void set_BoundsExtents(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_SET_BOUNDSEXTENTS_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_RESET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSCLOUD_ONDESTROY_OFFSET))(this);
		}
	};
}
