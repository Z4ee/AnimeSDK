#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseShapeData.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace miHoYoEmotion { class BlendShapeBind; }
namespace miHoYoEmotion { class ClipShapeElement; }

#define MIHOYOEMOTION_CLIPSHAPEDATA_UPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x19785470)
#define MIHOYOEMOTION_CLIPSHAPEDATA_UPDATETYPEELEMENT_OFFSET UNITYSDK_OFFSET(0x19785570)
#define MIHOYOEMOTION_CLIPSHAPEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19785980)
#define MIHOYOEMOTION_CLIPSHAPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19785890)
#define MIHOYOEMOTION_CLIPSHAPEDATA___BASE_UPDATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x19785A30)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeData_TypeDefinitionIndex = 37732;

	class ClipShapeData : public ::miHoYoEmotion::BaseShapeData
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_mouthRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ClipShapeData_TypeDefinitionIndex)->GetStaticField(0x292C0);
		}
		::Il2CppArray<::miHoYoEmotion::ClipShapeElement*>* phonemeElements; // 0x20
		::Il2CppArray<::miHoYoEmotion::ClipShapeElement*>* emotionElements; // 0x28
		::Il2CppArray<::miHoYoEmotion::BlendShapeBind*>* blendShapeBindElements; // 0x30
		::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeBind*>* mouthShapeBindElements; // 0x38
		::UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEDATA__CCTOR_OFFSET))();
		}

		::System::Void UpdateElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEDATA_UPDATEELEMENTS_OFFSET))(this);
		}

		::System::Void UpdateTypeElement(::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeElement*>* elements)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeElement*>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEDATA_UPDATETYPEELEMENT_OFFSET))(this, elements);
		}

		::System::Void __base_UpdateElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEDATA___BASE_UPDATEELEMENTS_OFFSET))(this);
		}
	};
}
