#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D580D50)
#define XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE_GET_OFFSET UNITYSDK_OFFSET(0x1D576370)
#define XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE_RETURN_OFFSET UNITYSDK_OFFSET(0x1D575C20)
#define XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D580DF0)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrail_ControlPointLinkedNode_TypeDefinitionIndex = 39305;

	class XWeaponTrail_ControlPointLinkedNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Vertices_List; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UVs_List; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Color>* Colors_List; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE_CLEAR_OFFSET))(this);
		}

		static ::XftWeapon::XWeaponTrail_ControlPointLinkedNode* Get()
		{
			return ((::XftWeapon::XWeaponTrail_ControlPointLinkedNode*(*)())((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE_GET_OFFSET))();
		}

		static ::System::Void Return(::XftWeapon::XWeaponTrail_ControlPointLinkedNode* item)
		{
			return ((::System::Void(*)(::XftWeapon::XWeaponTrail_ControlPointLinkedNode*))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAIL_CONTROLPOINTLINKEDNODE_RETURN_OFFSET))(item);
		}
	};
}
