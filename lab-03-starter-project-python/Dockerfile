FROM python:3.12-alpine

#change shell so it supports source command
#SHELL ["/bin/bash", "-c"]

WORKDIR /project

#first mistake in provided build sequence - we use python3 instead of python
RUN python3 -m venv ./.venv 

#here i replaced . shortcut with source, so it is more clear what`s going on
RUN source ./.venv/bin/activate 

COPY requirements requirements

RUN pip install -r requirements/requirements.txt --no-deps

COPY spaceship spaceship

COPY build build


#when we have finally built our image, we can start the program:
CMD ["uvicorn", "spaceship.main:app", "--host=0.0.0.0", "--port=8080"]