#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class TestLyraSectorLoader;
namespace LyraSector { class LyraPackedAsset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class Mutex; }

#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_CHECKDEBUGVARIABLES_OFFSET UNITYSDK_OFFSET(0x1E244FD0)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_CHECKDEBUGVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E245550)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1E245530)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_REMOVEASSETS_OFFSET UNITYSDK_OFFSET(0x1E2451C0)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1E242B20)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1E245540)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E242D00)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E242960)

inline static constexpr unsigned int TestLyraSectorLoader_ClipmapLoaderData_TypeDefinitionIndex = 27866;

class TestLyraSectorLoader_ClipmapLoaderData : public ::System::Object
{
public:
	::System::String* m_SectorSceneVoxelAssetPathFormat; // 0x10
	::System::Collections::Generic::HashSet_1<::LyraSector::LyraSectorCoord>* m_LoadedCoords; // 0x18
	::TestLyraSectorLoader* m_LyraLoader; // 0x20
	::Il2CppArray<::LyraSector::LyraSectorCoord>* m_CachedLoadedCoordsArray; // 0x28
	::System::String* m_SsectorDistanceFieldAssetPathFormat; // 0x30
	::System::Collections::Generic::Dictionary_2<::LyraSector::LyraSectorCoord, ::LyraSector::LyraPackedAsset*>* m_LoadedPackedAssets; // 0x38
	::System::Threading::Mutex* m_Mutex; // 0x40
	::System::Collections::Generic::List_1<::LyraSector::LyraSectorCoord>* m_UnloadCoords; // 0x48
	::System::Int32 m_VisualizeModeID; // 0x50
	::System::Int32 m_ForceFullUpdateID; // 0x54
	::System::Boolean m_IsForDistanceField; // 0x58
	::System::Boolean m_Enabled; // 0x59
	::System::Boolean m_CachedLoadedCoordsArrayDirty; // 0x5A
	::System::Boolean m_EnableDebugView; // 0x5B
	::System::Boolean m_ForceFullUpdate; // 0x5C
	::System::Int32 m_VisualizeMode; // 0x60

	::System::Void _ctor(::System::String* lyraAssetDir, ::System::Boolean isForDistanceField, ::TestLyraSectorLoader* lyraLoader)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::TestLyraSectorLoader*))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA__CTOR_OFFSET))(this, lyraAssetDir, isForDistanceField, lyraLoader);
	}

	::System::Void Update(::UnityEngine::Vector3 camPos, ::System::Int32 visualizeMode, ::System::Boolean forceFullUpdate, ::System::Boolean enableDebugView)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_UPDATE_OFFSET))(this, camPos, visualizeMode, forceFullUpdate, enableDebugView);
	}

	::System::Boolean get_enable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_GET_ENABLE_OFFSET))(this);
	}

	::System::Void set_enable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_SET_ENABLE_OFFSET))(this, value);
	}

	::System::Void RemoveAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_REMOVEASSETS_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_RESET_OFFSET))(this);
	}

	::System::Void CheckDebugVariable(::System::String* variableName, ::System::Int32& variableID)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_CHECKDEBUGVARIABLE_OFFSET))(this, variableName, variableID);
	}

	::System::Void CheckDebugVariables()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA_CHECKDEBUGVARIABLES_OFFSET))(this);
	}
};
