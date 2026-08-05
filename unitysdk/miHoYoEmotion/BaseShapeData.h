#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace miHoYoEmotion { class ShapeElement; }

#define MIHOYOEMOTION_BASESHAPEDATA_ADDSHAPEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D025BB0)
#define MIHOYOEMOTION_BASESHAPEDATA_INITELEMENTDIC_OFFSET UNITYSDK_OFFSET(0x1D025AE0)
#define MIHOYOEMOTION_BASESHAPEDATA_UPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D025C80)
#define MIHOYOEMOTION_BASESHAPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D025D30)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BaseShapeData_TypeDefinitionIndex = 40004;

	class BaseShapeData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::miHoYoEmotion::ShapeElement*>* _elementDic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASESHAPEDATA__CTOR_OFFSET))(this);
		}

		::System::Void InitElementDic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASESHAPEDATA_INITELEMENTDIC_OFFSET))(this);
		}

		::System::Void AddShapeElement(::miHoYoEmotion::ShapeElement* shapeElement)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ShapeElement*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASESHAPEDATA_ADDSHAPEELEMENT_OFFSET))(this, shapeElement);
		}

		::System::Void UpdateElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASESHAPEDATA_UPDATEELEMENTS_OFFSET))(this);
		}
	};
}
