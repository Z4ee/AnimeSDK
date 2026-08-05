#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/RDPhonemeMarker.h"

namespace System { class Object; }
namespace System { class String; }
namespace miHoYoEmotion { class PhonemeShape; }

#define MIHOYOEMOTION_FREERDPHONEMEMARKER_ADDORSETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D04C620)
#define MIHOYOEMOTION_FREERDPHONEMEMARKER_CREATENOTFREEMARKER_OFFSET UNITYSDK_OFFSET(0x1D04C3F0)
#define MIHOYOEMOTION_FREERDPHONEMEMARKER_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D04C560)
#define MIHOYOEMOTION_FREERDPHONEMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04C240)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FreeRDPhonemeMarker_TypeDefinitionIndex = 39995;

	class FreeRDPhonemeMarker : public ::miHoYoEmotion::RDPhonemeMarker
	{
	public:
		::miHoYoEmotion::PhonemeShape* shape; // 0x30

		::System::Void _ctor(::System::Int32 phonemeNumber, ::System::Single time, ::System::Single value, ::System::Int32 emotionIndex, ::System::String* word, ::System::Single decibel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREERDPHONEMEMARKER__CTOR_OFFSET))(this, phonemeNumber, time, value, emotionIndex, word, decibel);
		}

		::System::Object* CreateNotFreeMarker()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREERDPHONEMEMARKER_CREATENOTFREEMARKER_OFFSET))(this);
		}

		::System::Single GetWeight(::System::Int32 blendshapeId)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREERDPHONEMEMARKER_GETWEIGHT_OFFSET))(this, blendshapeId);
		}

		::System::Void AddOrSetWeight(::System::Int32 blendshapeId, ::System::String* blendshapeName, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FREERDPHONEMEMARKER_ADDORSETWEIGHT_OFFSET))(this, blendshapeId, blendshapeName, weight);
		}
	};
}
