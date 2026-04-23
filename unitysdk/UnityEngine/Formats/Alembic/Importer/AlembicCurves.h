#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Formats::Alembic::Importer { class AlembicCurves_OnUpdateDataHandler; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ADD_ONUPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1A1CA940)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_CURVEOFFSETS_1_OFFSET UNITYSDK_OFFSET(0x1A1CAF70)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_CURVEOFFSETS_OFFSET UNITYSDK_OFFSET(0x1A1CA8C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_POSITIONSLIST_OFFSET UNITYSDK_OFFSET(0x1A1CAF60)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1A1CA8A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_UVS_1_OFFSET UNITYSDK_OFFSET(0x1A1CAF80)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_UVS_OFFSET UNITYSDK_OFFSET(0x1A1CA8E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_VELOCITIESLIST_OFFSET UNITYSDK_OFFSET(0x1A1CAFA0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_VELOCITIES_OFFSET UNITYSDK_OFFSET(0x1A1CA920)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_WIDTHS_1_OFFSET UNITYSDK_OFFSET(0x1A1CAF90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_WIDTHS_OFFSET UNITYSDK_OFFSET(0x1A1CA900)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_INVOKEONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1CAA00)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_REMOVE_ONUPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1A1CA9A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CAFB0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCurves_TypeDefinitionIndex = 40869;

	class AlembicCurves : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler* update; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* _positionsList_k__BackingField; // 0x20
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>* _curveOffsets_k__BackingField; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector2>* _uvs_k__BackingField; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Single>* _widths_k__BackingField; // 0x38
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* _velocitiesList_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Positions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_POSITIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_CurveOffsets()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_CURVEOFFSETS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_UVs()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_UVS_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_Widths()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_WIDTHS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Velocities()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_VELOCITIES_OFFSET))(this);
		}

		::System::Void add_OnUpdateData(::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ADD_ONUPDATEDATA_OFFSET))(this, value);
		}

		::System::Void remove_OnUpdateData(::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_REMOVE_ONUPDATEDATA_OFFSET))(this, value);
		}

		::System::Void InvokeOnUpdate(::UnityEngine::Formats::Alembic::Importer::AlembicCurves* curves)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_INVOKEONUPDATE_OFFSET))(this, curves);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* get_positionsList()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_POSITIONSLIST_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>* get_curveOffsets_1()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_CURVEOFFSETS_1_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector2>* get_uvs_1()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_UVS_1_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Single>* get_widths_1()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_WIDTHS_1_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* get_velocitiesList()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_VELOCITIESLIST_OFFSET))(this);
		}
	};
}
