#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/EmotionMarker.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYOEMOTION_FREEEMOTIONMARKER_ADDORSETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB09140)
#define MIHOYOEMOTION_FREEEMOTIONMARKER_CREATENOTFREEMARKER_OFFSET UNITYSDK_OFFSET(0x1BB08FB0)
#define MIHOYOEMOTION_FREEEMOTIONMARKER_CREATE_OFFSET UNITYSDK_OFFSET(0x1BB08E90)
#define MIHOYOEMOTION_FREEEMOTIONMARKER_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB090A0)
#define MIHOYOEMOTION_FREEEMOTIONMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFE970)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FreeEmotionMarker_TypeDefinitionIndex = 39352;

	class FreeEmotionMarker : public ::miHoYoEmotion::EmotionMarker
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* bindingIndices; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* weights; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREEEMOTIONMARKER__CTOR_OFFSET))(this);
		}

		static ::miHoYoEmotion::FreeEmotionMarker* Create()
		{
			return ((::miHoYoEmotion::FreeEmotionMarker*(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREEEMOTIONMARKER_CREATE_OFFSET))();
		}

		::System::Object* CreateNotFreeMarker()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREEEMOTIONMARKER_CREATENOTFREEMARKER_OFFSET))(this);
		}

		::System::Single GetWeight(::System::Int32 bindingIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREEEMOTIONMARKER_GETWEIGHT_OFFSET))(this, bindingIndex);
		}

		::System::Void AddOrSetWeight(::System::Int32 bindingIndex, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREEEMOTIONMARKER_ADDORSETWEIGHT_OFFSET))(this, bindingIndex, weight);
		}
	};
}
