#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Formats::Alembic::Importer { class AlembicCurves_OnUpdateDataHandler; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ADD_ONUPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1CE2C7F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_CURVEOFFSETS_1_OFFSET UNITYSDK_OFFSET(0x1CE2C8F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_CURVEOFFSETS_OFFSET UNITYSDK_OFFSET(0x1CE2C770)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_POSITIONSLIST_OFFSET UNITYSDK_OFFSET(0x1CE2C8E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1CE2C750)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_UVS_1_OFFSET UNITYSDK_OFFSET(0x1CE2C900)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_UVS_OFFSET UNITYSDK_OFFSET(0x1CE2C790)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_VELOCITIESLIST_OFFSET UNITYSDK_OFFSET(0x1CE2C920)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_VELOCITIES_OFFSET UNITYSDK_OFFSET(0x1CE2C7D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_WIDTHS_1_OFFSET UNITYSDK_OFFSET(0x1CE2C910)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_GET_WIDTHS_OFFSET UNITYSDK_OFFSET(0x1CE2C7B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_INVOKEONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CE2C8B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_REMOVE_ONUPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1CE2C850)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2C930)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCurves_TypeDefinitionIndex = 44737;

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

		::System::Void add_OnUpdateData(::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ADD_ONUPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void remove_OnUpdateData(::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves_OnUpdateDataHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_REMOVE_ONUPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void InvokeOnUpdate(::UnityEngine::Formats::Alembic::Importer::AlembicCurves* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_INVOKEONUPDATE_OFFSET))(this, a1);
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
