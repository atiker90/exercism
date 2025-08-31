#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
	int lasagna_master::preparationTime(std::vector<std::string> layers, int avgTime) {
		return (layers.size() * avgTime);
	}

	amount lasagna_master::quantities(std::vector<std::string> layers) {
		amount amount;
		amount.noodles = 0;
		amount.sauce = 0.0;

		for (int i = 0; i < layers.size(); i++) {
			if (layers[i] == "noodles") {
				amount.noodles += 50;
			}
			else if (layers[i] == "sauce") {
				amount.sauce += 0.2;
			}
		}
		return amount;
	}

	void lasagna_master::addSecretIngredient(std::vector<std::string>& myList,
		const std::vector<std::string>& friendsList) {
		myList.back() = friendsList.back();
	}

	void lasagna_master::addSecretIngredient(std::vector<std::string>& myList,
		const std::string& auntiesIngredient) {
		myList.back() = auntiesIngredient;
	}

	std::vector<double> lasagna_master::scaleRecipe(std::vector<double> ingedients42, int portions_needed) {
		std::vector<double> ingredients_needed;
		for (int i =0; i < ingedients42.size(); i++) {
			ingredients_needed.push_back((ingedients42[i] / 2) * portions_needed);
		}
		return ingredients_needed;
	}
}  // namespace lasagna_master
