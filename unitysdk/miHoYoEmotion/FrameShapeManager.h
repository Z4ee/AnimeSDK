#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/ElementManager.h"

namespace miHoYoEmotion { class FrameShapeData; }
namespace miHoYoEmotion { class FrameShapeManager_FrameShapeRuntime; }

#define MIHOYOEMOTION_FRAMESHAPEMANAGER_FORCEUPDATESHAPERUNTIME_OFFSET UNITYSDK_OFFSET(0x1BB086E0)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER_INITEMOANIM_OFFSET UNITYSDK_OFFSET(0x1BAF9300)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1BB08680)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1BB08150)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER_UPDATESHAPEDATA_OFFSET UNITYSDK_OFFSET(0x1BB08380)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER_UPDATESHAPERUNTIME_OFFSET UNITYSDK_OFFSET(0x1BB081D0)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB08730)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_INITEMOANIM_OFFSET UNITYSDK_OFFSET(0x1BB08810)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1BB088A0)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1BB088B0)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_UPDATESHAPEDATA_OFFSET UNITYSDK_OFFSET(0x1BB08940)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_UPDATESHAPERUNTIME_OFFSET UNITYSDK_OFFSET(0x1BB089D0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShapeManager_TypeDefinitionIndex = 39336;

	class FrameShapeManager : public ::miHoYoEmotion::ElementManager
	{
	public:
		::Il2CppArray<::miHoYoEmotion::FrameShapeManager_FrameShapeRuntime*>* _phonemeShapeRuntimes; // 0x48
		::Il2CppArray<::miHoYoEmotion::FrameShapeManager_FrameShapeRuntime*>* _emotionShapeRuntimes; // 0x50
		::miHoYoEmotion::FrameShapeData* _frameShapeData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_START_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_ONREALENABLE_OFFSET))(this);
		}

		::System::Void InitEmoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_INITEMOANIM_OFFSET))(this);
		}

		::System::Void ForceUpdateShapeRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_FORCEUPDATESHAPERUNTIME_OFFSET))(this);
		}

		::System::Void UpdateShapeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_UPDATESHAPEDATA_OFFSET))(this);
		}

		::System::Void UpdateShapeRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_UPDATESHAPERUNTIME_OFFSET))(this);
		}

		::System::Void __base_InitEmoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_INITEMOANIM_OFFSET))(this);
		}

		::System::Void __base_OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_ONREALENABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_START_OFFSET))(this);
		}

		::System::Void __base_UpdateShapeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_UPDATESHAPEDATA_OFFSET))(this);
		}

		::System::Void __base_UpdateShapeRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER___BASE_UPDATESHAPERUNTIME_OFFSET))(this);
		}
	};
}
